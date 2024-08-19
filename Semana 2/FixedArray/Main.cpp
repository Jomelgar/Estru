#include <iostream>
#include "FixedArray.hpp"

int main()
{
    FixedArray<std::string> arrS1(10);
    FixedArray<int> arr1({10,20,30});


    for(int i = 0; i < arrS1.getSize(); i++)
    {
        arrS1[i] = std::string(10, 'A' + i);
    }

    std::cout<<"String Array 1: " << arrS1.toString() << '\n';
    std::cout<<"Int Array 1: " << arr1.toString() << '\n';
}