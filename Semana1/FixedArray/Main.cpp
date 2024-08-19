#include <iostream>
#include "FixedArray.hpp"

int main()
{
    std::cout<< "♀ \n";
    FixedArray<int> arr1(10);
    FixedArray<int> arr2;
    
    //try{
    for(int i = 0; i < arr1.getSize(); i++)
    {
        arr1[i] = i*10;
    }
    
    FixedArray<int> arr3(arr1);
    FixedArray<int> arr4 = arr3;
    std::cout << arr1.toString() << '\n';

    for(int i = 0; i < arr2.getSize(); i++)
    {
        arr2[i] = i*100;
    }
    std::cout << arr2.toString() << '\n';

    std::cout << arr3.toString() << '\n';
    std::cout << arr4.toString() << '\n';
    return 0;
    /*}
    catch(std::exception &err)
    {
        std::cerr << "Error: "<<err.what() << '\n';
    }; */
}