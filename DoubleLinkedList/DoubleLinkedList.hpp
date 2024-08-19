#pragma once
#include <string>

template <typename T>
class DoubleLinkedList 
{
    public:
        class Node
        {
            friend class DoubleLinkedList;
        public:
            Node(T _value) : value(_value), After(nullptr), Before(nullptr){}
            Node * getAfter() { return After; }
            Node * getBefore(){ return Before; }
            void setAfter(Node  * node){ After = node;}
            void setBefore(Node * node) { Before = node;}
        private:
            T value;
            Node * After, * Before;
        };

        DoubleLinkedList() : size(0), Head(nullptr), Tail(nullptr) {}

        int getSize(){ return size;}
        std::string printFromHead();
        std::string printFromTail();

        void addToHead(T value);
        void addToTail(T value);

        ~DoubleLinkedList();
    private:
    Node * Head, * Tail;
    int size;
};

template<typename T>
DoubleLinkedList<T>::~DoubleLinkedList()
{
    Node *n = Head;
    while(n != nullptr)
    {
        Node * next = n->After;
        delete n; 
        n = next;
    }
}

template<typename T>
void DoubleLinkedList<T>::addToHead(T value)
{
    Node * n = new Node(value);
    if(Head == nullptr)
    {
        Head = Tail = n;
        size = 1;
    }
    else
    {
        Head->setBefore(n);
        n->setAfter(Head);
        Head = n;
        size++;
    }
}

template<typename T>
void DoubleLinkedList<T>::addToTail(T value)
{
    Node * n = new Node(value);
    if(Tail == nullptr)
    {
        Head = Tail = n;
        size = 1;
    }
    else
    {
        n->setBefore(Tail);
        Tail->setAfter(n);
        Tail = n;
        size++;
    }
}

template<typename T>
std::string DoubleLinkedList<T>::printFromHead()
{
    std::string result = "[";
    for(Node * n = Head; n != nullptr; n = n->getAfter())
    {
        result+= std::to_string(n->value);
        if(n->getAfter() != nullptr)
        {
            result += ", ";
        }
    }

    return result + "]";

}

template<typename T>
std::string DoubleLinkedList<T>::printFromTail()
{
    std::string result = "[";
    for(Node * n = Tail; n != nullptr; n = n->getBefore())
    {
        result+= std::to_string(n->value);
        if(n->getBefore() != nullptr)
        {
            result += ", ";
        }
    }

    return result + "]";
}