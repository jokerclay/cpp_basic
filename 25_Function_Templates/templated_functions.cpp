// This program shows of templated  functions in c++ 
// By: clay liu

#include <iostream>

using namespace std;

// Overloading  for "sum" works, but seem excessive(过多的，过度的) if we have 
// many types of a singled function.we do not need to  re-write sum of every
// possiable data type

int sum_overload(const int a, const int b){
    return a + b;
}

double sum_overload(const double a, const double b){
    return a + b;
}

// we can use templates
// Templates turn a data type into  a parmater
// Complier will generate code for us at complie time

// 使用 模板 将 数据类型 看做是 参数 来使用, 这样就不用 写做一样的事，但仅仅是
// 数据类型 不同的函数
template <typename T>
T sum(const T a, const T b){
    return a  + b;
}   // template 最后不需要加 ；

// 有时候我们不仅仅只用一个 数据类型 当做 参数 来使用
// 一个模板 多个参数
template<typename T, typename U>
U sum(const T a, const U b){
    return a + b;
}

int main(){
    // Variables for functions
    int a_i = 10;
    int b_i = 20;
    double a_d = 1.234;
    double b_d = 6.678;

    // Print out sums using overloaded functions
    // 以函数重载的方式打印出来
    cout << "Overload int sum :" << sum_overload(a_i,b_i) << endl;
    cout << "Overload double sum :" << sum_overload(a_d,b_d) << endl;

    // Print out sums using a templated function with explicit(明确的,不含糊的)
    // type
    // 使用 指定类型的 sum 函数 sum<int> sum<double>
    cout << "Templated int sum :" << sum<int>(a_i,b_i) << endl;
    cout << "Templated double sum :" << sum<double>(a_d,b_d) << endl;

    // Print out sums using a templated function with implicit(明确的,不含糊的)
    // type
    // 使用不明确的 sum 函数， 编译器会自动使用正确的函数
    cout << "Templated int sum :" << sum(a_i,b_i) << endl;
    cout << "Templated double sum :" << sum(a_d,b_d) << endl;

    // Print out sums using a templated function with multiple types
    // 使用模板 含有多个参数
    cout << "Templated int/double sum :" << sum(a_i,b_d) << endl;
    cout << "Templated double/int sum :" << sum(a_d,b_i) << endl;

    return 0;
}

