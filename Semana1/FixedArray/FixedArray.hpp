#pragma once

#include <string>
#include <stdexcept>
template <typename T>

/*
* Estructura de Arreglo de tamano con cantidad fija
* Entre mas grande sea el header mas tarda en usar todo lo que tiene
* Usar los templates en el header
*/

class FixedArray
{
public:
    //FixedArray() = delete; //Eliminar el constructor por defecto
    
    FixedArray() : size(0), data(nullptr) {}

    FixedArray(const FixedArray& rhs)
    : size(rhs.size), data(new T[rhs.size]) 
    {
        for(int i = 0; i < size;i++)
        {
            data[i] = rhs.data[i];
        }
    }

    FixedArray(int size): size(size), data(new T[size]) {}; //Constructor obligatorio

    ~FixedArray(); //Destructor

    void resize(int sz);

    //int getElement(int index); //Leer

    //void setElement(int index, int value); //Escribir

    std::string toString();

    //Operador de []
    T & operator[] (int index);

    FixedArray& operator=(const FixedArray & rhs)
    {
    // TODO: Insertar una instrucción "return" aquí
        size = rhs.size;
        if(data)
        {
            delete [] data;
        }
        data = new T[rhs.size];

        for(int i = 0; i < size; i++)
        {
            data[i] = rhs.data[i];
        }

        return *this;
    }

    int getSize() //Funcion in-line (ponerlo en el mismo header, si es 5 lineas para abajo)
    {return size;}
private:
    int * data; 
    T size;
};

#include "FixedArray.cpp"