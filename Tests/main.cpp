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

int main()
{
    std::cout << "Hello World!" << std::endl;

    test();
    return 0;
}
