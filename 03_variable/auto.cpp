#include <iostream>
using namespace std;

/*
 * `auto` keyword tell the complier that:
 * You decide what the result type is
 * I don't need to warried about what the type should be
 *
 *
 * `auto` 语法糖， make you easier to work with complex types
 * like iterator,  you don't have to write the iterator every time
 * 
 * `auto` 声明变量同时要精心初始化，不能只声明
 *
 * 
 * */


int main()
{
    auto var1 = 1.523;
    auto var2 = 489;
    auto result = var1 + var2;
    std::cout << result << std::endl;

    return 0;
}


int main1()
{
    double var1 = 1.523;
    int var2 = 489;
    int result = var1 + var2;
    std::cout << result << std::endl;

    return 0;
}


int main2()
{
    // auto result;
    // result = 6;
    // std::cout << result << std::endl;

    return 0;
}

