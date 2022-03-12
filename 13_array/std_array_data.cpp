// std::array 是 C++ 11 标准
// std::span 是 C++ 20 标准



#include <cstddef>
#include <iostream>
#include <span>
#include <array>
 
void pointer_func(const int* p, std::size_t size)
{
    std::cout << "data = ";
    for (std::size_t i = 0; i < size; ++i)
        std::cout << p[i] << ' ';
    std::cout << '\n';
}
 
void span_func(std::span<const int> data) // since C++20
{
    std::cout << "data = ";
    for (const int e : data)
        std::cout << e << ' ';
    std::cout << '\n';
}
 
int main()
{
    std::array<int,4> container { 1, 2, 3, 4 };
 
    // Prefer container.data() over &container[0]
    pointer_func(container.data(), container.size());
 
    // std::span (C++20) is a safer alternative to separated pointer/size.
    span_func({container.data(), container.size()});
}
