#pragma once

#include <stdexcept>
#include<string>
#include <initializer_list>
#include<type_traits>


template<typename T>
class LinkedList
{
public:
    //Node 
    class Node
    {
        friend class LinkedList;
    public:
        Node(T _data) : data(_data), next(nullptr) {}
        
        Node (T _data, Node * _next) : data(_data), next(_next) {}
        
        void setNext(Node * _next) { next = _next; }

        Node * getNext(){ return next; }
        T getData(){ return data; }

    private:
        T data;
        Node * next;
    };
    
    //Constructor
    LinkedList() : _size(0),head(nullptr), tail(nullptr) {}

    //Destructor
    ~LinkedList();

    //Functions
    void addElement(T value);
    int size() const {  return _size;}
    Node *getHead(){ return head; }

    //Operator
    T operator[](int index);

private:
    Node * head, * tail;
    int _size;
};

template<typename T>
LinkedList<T>::~LinkedList()
{
    Node *n = head;
    while(n != nullptr)
    {
        Node * next = n->next;
        delete n; 
        n = next;
    }
}

template <typename T>
void LinkedList<T>::addElement(T value)
{
    Node * n = new Node(value, nullptr);
    if(head == nullptr)
    {
        head = tail = n;
        _size = 1;
    }
    else
    {
        tail->setNext(n);
        tail = n;
        _size++;
    }
}

template <typename T>
T LinkedList<T>::operator[](int index)
{
    if(index < 0 || index >= _size)
    {
        throw std::out_of_range("Index out of bounds");
    }else
    {
        Node *n = head;
        for(int i = 0 ; i < index;i++, n = n->next);

        return n->data;
    }
    return T();
}
