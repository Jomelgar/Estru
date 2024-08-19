#pragma once

#include <stdexcept>
#include <string>
#include <initializer_list>
#include <iostream>
template <typename T>
class LinkedList
{
public:
    class Node
    {
        friend class LinkedList;
    public:
        Node(T _data): data(_data), next(nullptr)
        {}

        Node(T _data, Node *_next): data(_data), next(_next)
        {}

        void setData(T _data); // TODO

        T getData()
        { return data; }

        void setNext(Node *_next)
        { next = _next; }

        Node *getNext()
        { return next; }

    private:
        T data;
        Node *next;
    };


    LinkedList(): _size(0), head(nullptr), tail(nullptr)
    {}

    LinkedList(const std::initializer_list<T>& il); //TODO
    LinkedList(const std::vector<T>& v); //TODO

    ~LinkedList();

    bool operator==(const LinkedList<T>& other); //TODO
    bool operator==(const std::vector<T>& other); //TODO

    void addElement(T _data);
    void pushFront(T _data); //TODO

    T operator[](int index);

    int size() const
    { return _size; }

    Node *getHead()
    { return head; }

    void selectionSort();


private:
    Node *head, *tail;
    int _size;
};

template <typename T>
inline LinkedList<T>::LinkedList(const std::initializer_list<T> &il) : _size(0), head(nullptr), tail(nullptr)
{
    auto it = il.begin();
    for(int i = 0; i < il.size(); i++)
    {
        addElement(*it);
        it++;
    }
}

template <typename T>
LinkedList<T>::LinkedList(const std::vector<T> &v) : _size(0), head(nullptr), tail(nullptr)
{
    for(auto value : v)
    {
        addElement(value);
    }
}

template <typename T>
LinkedList<T>::~LinkedList()
{
    Node *n = head;
    while (n != nullptr) {
        Node *next = n->next;
        delete n;
        n = next;
    }
    head = tail = nullptr;
    _size = 0;
}

template <typename T>
bool LinkedList<T>::operator==(const LinkedList<T> &other)
{
    if(other.size() != this->size()){return false;}
    Node * n2 = other.head;
    for(Node * n1 = head; n1 != nullptr; n1 = n1->getNext())
    {
        if(n1->data != n2->data)
        {
            return false;
        }
        n2 = n2->next;
    }
    return true;
}

template <typename T>
bool LinkedList<T>::operator==(const std::vector<T> &other)
{
    if(other.size() != this->size()){return false;}

    Node * n = head;
    for(auto value : other)
    {
        if(n->getData() != value)
        {
            return false;
        }
        n = n->next;
    }
    return true;
}

template<typename T>
void LinkedList<T>::addElement(T _data)
{
    Node *n = new Node(_data, nullptr);

    if (head == nullptr) {
        head = tail = n;
        _size = 1;
    } else {
        tail->setNext(n);
        tail = n;
        _size++;
    }
}

template <typename T>
void LinkedList<T>::pushFront(T _data)
{
    Node *n = new Node(_data, nullptr);

    if(head == nullptr)
    {
        head = tail = n;
        _size = 1;
    }else
    {
        n->next = head;
        head = n;
        _size++;

    }
}

template<typename T>
T LinkedList<T>::operator[](int index)
{
    if (index < 0 || index >= _size) {
        throw std::out_of_range("LinkedList invalid index");
    }

    Node *n = head;
    int i = 0;
    while (i < index) {
        n = n->next;
        i++;
    }
    return n->data;
}

template <typename T>
void LinkedList<T>::selectionSort()
{
    for(Node *i= head; i != nullptr; i = i->next)
    {
        Node * min = i;
        for(Node *j = i->next; j != nullptr; j = j->next)
        {
            if(j->getData() < min->data)
            {
                min = j;
            }
        }
        T tmp = i->data;
        i->setData(min->data);
        min->setData(tmp);
    }
}

template <typename T>
void LinkedList<T>::Node::setData(T _data)
{
    this->data = _data;
}
