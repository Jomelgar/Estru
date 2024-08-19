#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

//Tarea
/*
    Declarar un std::vector y generar un millon de numeros y un .pushback
    y usar std::chrono para ver cuanto se tarda
*/

int gen()
{
    return 78;
};


void clase()
{
    std::vector<int> arr1({10,20,30,40,50});

    arr1.reserve(32);
    arr1.resize(16);

    std::cout<< "Vector size: " << arr1.size() << ", Capacity: " << arr1.capacity() << '\n'; 
    //std::array<int,10> arr;
    
    //arr = {10,20,30,40,50};

    //std::fill(arr.begin(), arr.end(), 89);

    for(int itm : arr1)
    {
        std::cout << itm << ' ';
    }
    std::cout << '\n';

    std::cout << "Array Size: " << arr1.size() << '\n';
};

int main()
{
        
}