// This program shows off the basic of unions(共用体) in C++
// 结构体和共用体的区别在于：结构体的各个成员会占用不同的内存，互相之间没有影响
// 而共用体的所有成员占用同一段内存，修改一个成员会影响其余所有成员。
// see more info:
// <a href="http://c.biancheng.net/view/2035.html">C语言共用体详解</a>
// By: clay liu

#include <iostream>

using namespace std;

// Simple struct definition that contains 4 different data types
struct various_data{
    // 1 byte
    char a;

    // 4 byte
    int b;

    // 4 byte
    float c;

    // 8 byte
    double d;
};

// create a simple union
union union_test{
    various_data union_struct;
    int union_int;
    float union_float;
    double union_double;
};

int main(){

    // create a struct and initalze it
    various_data v_data;
    v_data.a = 'a';
    v_data.b = 24;
    v_data.c = 867.5309;
    v_data.d = 2001.1002;

    // Print out the size of struct
    cout << "size of struct is :" << sizeof(various_data) << endl;

    // create an union and assign a field
    union_test ut_1;
    ut_1.union_struct = v_data;

    // Print out the size of union
    cout << "size of union is :" << sizeof(ut_1) << endl;

    // print out the address of the union and of the field
    cout << "union pointer: " << &ut_1 << ", field pointer: " << 
        &(ut_1.union_struct) <<endl;

    // Re-assign the union and pointers again 
    int b = 5;
    ut_1.union_int = b;

    // Print out the size of union
    cout << "size of union is :" << sizeof(ut_1) << endl;
    cout << "union pointer: " << &ut_1 << ", field pointer: " << 
        &(ut_1.union_int) <<endl;

    return 0;
}
