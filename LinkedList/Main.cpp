#include <iostream>
#include <chrono>
#include "LinkedList.hpp"
int main()
{
    LinkedList<int> l1;
    l1.addElement(10);
    l1.addElement(20);
    l1.addElement(30);
    l1.addElement(40);

    std::cout << "Size: " << l1.size() << '\n';

    auto start1 = std::chrono::system_clock::now();
    for(int i = 0; i < l1.size(); i++)
    {
        std::cout << "Element[" << i << "]: " << l1[i] << '\n';
    }
   
   auto start2 = std::chrono::system_clock::now(); 
   for(LinkedList<int>::Node * n = l1.getHead(); n != nullptr; n = n->getNext())
   {
        std::cout<<"Element: " << n->getData() << "\n";
   }
   auto end2 = std::chrono::system_clock::now();

   
}