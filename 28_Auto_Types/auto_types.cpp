// This program shows off the auto type in c++11
// auto  与 动态编程语言 例如 python 相似，不用声明变量类型
// By: clay liu

#include <iostream>
#include <typeinfo>
#include <vector>

using namespace std;

// simple function to show  off using auto with return type
double multiply(double a, double b){
    return  a * b;
}

int main(){
    // Use auto  when we do direct assignment
    auto integer = 42;
    cout << "Integer is of type " << typeid(integer).name() << endl;

    // Use auto with a return type of a function 
    auto double_precision = multiply(1.4,2.7);
    cout << "double_precision is of type " << typeid(double_precision).name() << endl;

    // Use auto on a more complex data type
    vector<int> int_vec;
    auto iterator = int_vec.begin();
    cout << "iterator is of type " << typeid(iterator).name() << endl;

    return 0;
}
