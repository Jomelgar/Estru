#include <iostream>
#include "FixedArray.hpp"

int main()
{
    FixedArray<int> arr1 = {41, 69, 38, 38, 17, 37, 91, 72, 77, 24, 42, 55, 54, 27, 16, 89, 61, 96, 69, 16};
    arr1.sort();

    std::cout << arr1.toString() << '\n';

    FixedArray<std::string> arrS1 = {"B", "C", "A"};
    arrS1.sort();
    std::cout << arrS1.toString() << '\n';
}