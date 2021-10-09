// This program shows off copy constuctor in C++
// By: clay liu

#include <iostream>
#include "interface.h"

using namespace std;

int main(){
    // create a new vector objcet
    vector obj1(1.0,2.0,3.0,4.0);

    // print out the coordiantes
    cout << "========== 使用构造函数 ============" <<endl;
    obj1.print();

    // Use the copy constructor
    vector obj2 = obj1;

    cout << "========== 使用复制构造函数 ============" <<endl;
    // print out the new objcet
    obj2.print();

    return 0;
}
