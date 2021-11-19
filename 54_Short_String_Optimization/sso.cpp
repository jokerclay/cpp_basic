// This program implements a set a benchmark to show off the short string 
// benchmark(n 基准;     vt.检测（用基准问题测试)
// optimizationn in C++

// command : 
//           g++ sso.cpp && ./a.out
//

#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

// Overload new operator to track heap allocations
// 重载一个行的操作符用来跟踪堆的分配

void* operator new(size_t n){
    cout << "Allocating " << n << "  bytes "<< endl;
    return malloc(n);
}


int main(){

    // First, let  see how big of the string is
    // 打印出 string 的大小

    size_t string_size = sizeof(string);
    cout << "Size of string =  " << string_size << endl;

    // Greadually increase the size of in the loop

    for(size_t i = 0; i < string_size; i++){
        string s(i, 'X');
        std::cout << i << ": " << s << std::endl;
    }

    return 0;
}



