#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v(5);
    v[0] = 10;
    v[1] = 45;
    v[2] = 76;
    v[3] = 98;
    v[4] = 12;

    for (int i = 0; i < v.size();i++ )
    {
        std::cout << v[i]<<'\n';
    }

    return 0;
}
