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

    std::cout << "end of startWithSomeAlgorithm";
}

void functionForFetchPurpose()
{
    std::cout << "functionForFetchPurpose";
    std::vector<int> vec;
    auto it = vec.begin();
    while(it != vec.end())
    {
        ++it;
    }
}

int main()
{
    std::cout << "Hello World!" << std::endl;
    startWithSomeAlgorithm();
    crazyShit();
    crazyFeature();
    functionForFetchPurpose();
    test();
    return 0;
}
