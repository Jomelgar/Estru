#pragma once
#include <string>
#include <stdexcept>
#include <initializer_list>
#include <type_traits>

template<typename T>

class FixedArray
{
public:
//Constructors
    FixedArray(const FixedArray & rhs);
    FixedArray(int size) : size(size), data(new T[size]) {}
    FixedArray() : size(0), data(nullptr){}
    inline FixedArray(const std::initializer_list<T> & lst);

//Destructor
    ~FixedArray(){ delete [] data; }

//Operators
FixedArray & operator=(const FixedArray & rhs);
T & operator[](int index);

//Functions
std::string toString();
int getSize() { return size; }

//Processes
void resize(int resize);
void sort();

private:
//Parameters
    int size;
    T *data;
};


//Development -------------------------------------------------------------
template<typename T>
FixedArray<T>::FixedArray(const FixedArray<T> & rhs) : size(rhs.size), data(new T[rhs.size])
{
    for(int i = 0; i < size; i++)
    {
        data[i] = rhs.data[i];
    }
}

template <typename T>
inline FixedArray<T>::FixedArray(const std::initializer_list<T> &lst) : size(lst.size()), data(new T[lst.size()])
{
/*
    int i = 0;
    for(auto v : lst)
    {
        data[i] = v;
        i++;
    }
*/
/*
    T* p = data;
    for(auto v : lst)
    {
        *p ++ = v;
    }    
*/
/*
    for(int i = 0; i < lst.size(); i++)
    {
        data[i] = lst[i];
    }
*/
    auto it = lst.begin();
    for(int i = 0; i < lst.size(); i++)
    {
        data[i] = *it++;
    }
}

template<typename T>
FixedArray<T> & FixedArray<T>::operator=(const FixedArray<T> & rhs)
{
    if(data)
    {
        delete [] data;
    }

    size = rhs.size;
    data = new T[rhs.size];
    for(int i = 0; i < size; i++)
    {
        data[i] = rhs.data[i];
    }
    return *this;
}

template<typename T>
T & FixedArray<T>::operator[](int index)
{
    if(index >= 0 && index < size)
    {
        return data[index];
    }else
    {
        throw std::runtime_error("Index out of bounds.");
    }
}

template<typename T>
void FixedArray<T>::resize(int resize)
{
    if(data)
    {
        delete [] data;
    }

    size = resize;
    data = new T[resize]; 
}

template<typename T>
std::string FixedArray<T>::toString()
{
    std::string result = "[";
    if(data)
    {
        
        for(int i = 0; i < size; i++)
        {
            if(i > 0)
            {
                result += ", ";
            }
            if constexpr (std::is_same_v<T, std::string>)
            {
                result += data[i];
            }
            else
            {
                result += std::to_string(data[i]);
            }
        }
    }

    return result + "]";
}

template<typename T>
void FixedArray<T>::sort()
{
    
    for(int i = 0; i < size; i++)
    {
        int lower = i;
        for(int j = i; j < size; j++)
        {
            if(data[j] < data[lower])
            {
                lower = j;
            }
        }
 
        T tmp = data[lower];
        data[lower] = data[i];
        data[i] = tmp;
    }

}
//End of Development----------------------------------------------------
//End of File----------------------------------------------------------------------------