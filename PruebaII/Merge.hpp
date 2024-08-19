#pragma once
#include <vector>

template<typename T>
std::vector<T> merge(std::vector<T> & v1, std::vector<T> & v2)
{
    std::vector<T>  Rv;
    Rv.reserve(v1.size() + v2.size());
    for(T value: v1)
    {
        Rv.push_back(value);
    }

    for(T value : v2 )
    {
        Rv.push_back(value);
    }

    for(int i = 0; i < Rv.size();i++)
    {
        int position = i;
        for(int j = i; j < Rv.size();j++)
        {
            if(Rv.at(j) < Rv.at(position))
            {
                position = j;
            }
        }

        T tmp = Rv.at(position);
        Rv.at(position) = Rv.at(i);
        Rv.at(i) = tmp; 
    }    


    return Rv;
};