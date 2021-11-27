// Assert : 断言
//
// See more info:
// <a herf= "https://baike.baidu.com/item/assert/10931289?fr=aladdin">assert</a>
//
// For developer not for user 
//


// 定义 NDEBUG 编译器会移除所有的 assert() 代码
// #define NDEBUG

#include <iostream>

// #include <assert.h>
#include <cassert>

void foo(int i){
    // i > 0; 如果 i > 0 为假，则立即终止程序
    // 注意： 这里程序终止是因为我们自己的代码出现问题，和用户无关
    // 字符串在 c/c++ 中是地址，不会为 0, 永远不会为 false.
    assert(i > 0 && i < 600 && "你好啊，这里是一个 assert,可以在这里添加note");

    std::cout<< "i = "  << i << ", The parameter value is ok !"<< std::endl;
}

int main(){

    foo(123);
    foo(456);
    foo(-2);
    foo(9);

    return 0;
}

