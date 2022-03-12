// C++ 11
// std::array 是 C++ 对，内置 array 的抽象
// 支持原生的 index 访问，依然是 	static contiguous array 静态的连续数组
// 使得 array 更安全(带有边界检查)，更好用的函数支持
// 它本身是一个类

#include <iostream>
#include <array>
#include <numeric>

using namespace std;


int main() {
    // oldArray style
    
    int oldArray[10];
    for(int i = 0; i < 10; i++) {
        oldArray[i] = i;
        cout << oldArray[i] << endl;
    }
    
    cout << "---- std::array ----" << endl;
    
    // 创建 std::array
    array<int, 10> a;

    // 从 3 开始 加 10 个元素
    iota(begin(a), end(a), 3);

    // 打印数组
    for(int i = 0; i < 10; i++) {
        cout << a[i] << endl;
    }

    // at
    cout << "a.at(0) is :" << a.at(0) << endl;
//     cout << "a.at(80) is :" << a.at(80) << endl; 会有边界检查提示
    cout << "a.front() is :" << a.front() << endl;
    cout << "a.back() is :" << a.back() << endl;

    return 0;
}





