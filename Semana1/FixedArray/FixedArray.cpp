#include <stdexcept>
#include <string>
#include "FixedArray.hpp"

//Iniciar objetos con ':' los parametros
//FixedArray::FixedArray(int size) 

template <typename T>
std::string FixedArray<T>::toString()
{
    std::string result;
    result = "[";
   /* for(int i = 0; i < size; i++)
    {
        if(i > 0)
        {
            result += ", "; 
        }

        /*if(typeid(T) != typeid(std::string))
        {
            result += std::to_string(data[i]);
        }else 
        {*/
           // result += std::to_string(data[i]);
        //}
    //}
    /*result += "]";
    */
    return result;
}

template <typename T>
T & FixedArray<T>::operator[](int index)
{
    // TODO: Insertar una instrucción "return" aquí
    if(index >= 0 && index < size)
    {
        return data[index];
        
    }else
    {
        throw std::runtime_error("Index out of bounds");
    }
}


template <typename T>
FixedArray<T>::~FixedArray()
{
    if(data) //Si data es distinto de 0
    {
        delete [] data;
    }
}

template<typename T>
void FixedArray<T>::resize(int sz)
{
    if(data)
    {
        delete [] data;
    }
    size = sz;
    data = new T[size];
}

