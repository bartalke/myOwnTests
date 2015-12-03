#include <iostream>
#include <algorithm>
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

void crazyShit()
{
    std::cout << "Crazy shit is good for PO";
}

void startWithSomeAlgorithm()
{
    int a = 0;
    std::cout << "a: " << a;
    std::cout << "start with some algorithm";
}

int main()
{
    std::cout << "Hello World!" << std::endl;

    startWithSomeAlgorithm();
    crazyShit();
    test();
    return 0;
}
