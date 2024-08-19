#include<iostream>
#include "DoubleLinkedList.hpp"

int main()
{
    DoubleLinkedList<int> list;

    list.addToHead(10);
    list.addToTail(20);
    list.addToHead(30);

    std::cout<< "List Normal: "<< list.printFromHead()<< '\n';
    std::cout<< "List Reverse: "<< list.printFromTail()<< '\n';
    std::cout<< "List Size: " << list.getSize() << '\n';
}