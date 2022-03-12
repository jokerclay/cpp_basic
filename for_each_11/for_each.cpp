#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sum = 0;
void myFunc(int elem) {
    sum += elem;
}

int main() {

    // C++ 11
    std::vector<int> v = {1,2,3,4,5,6};

    // for each elem int the container, do the operation of myFunc
    std::cout << "---- c++ 11 ----" << std::endl;
    std::for_each(v.begin(), v.end(), myFunc);
    std::cout << sum << std::endl;

    // BUT use this way have to write a gloable function , 
    // so, we can  use lambda exprerssion.
    std::cout << "---- c++ 14 ----" << std::endl;
    std::for_each(v.begin(), v.end(), [&](int elem){
            sum += elem;
    });
    std::cout << sum << std::endl;

    // C++14
    // soupprt 'auto' key word, that we don't need to know what  the type is 
    // just use auto that it will automaticly know what kind of data type it is
    std::for_each(v.begin(), v.end(), [&](auto elem){
            sum += elem;
    });
    std::cout << sum << std::endl;

    std::cout << "---- c++ 17 ----" << std::endl;
    std::cout << "vector<int> v = {1,2,3,4,6,5} can don't write " << std::endl;
    std::cout << "vector v = {1,2,3,4,6,5} can auto know" << std::endl;
    std::cout << "set(CMAKE_CXX_STANDARD)" << std::endl;
    std::cout << "it called complie-time argument deduction / 编译期参数推断" << std::endl;

    return 0;
}

