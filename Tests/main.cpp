#include <iostream>
#include <constants.hpp>

void test()
{
    std::vector<int> v;

    for (int i = 0; i < v.size(); ++i)
    {
        std::cout << v[i];
    }
}

void crazyFeature()
{
    std::cout << "Suga how u get so fly ?";
}

int main()
{
    std::cout << "Hello World!" << std::endl;

    test();
    return 0;
}
