// This program shows off class constructors and class access modifiers in C++
// By: clay liu

#include <iostream>
#include "interface.h"

using namespace std;

int main(){
    // create two vectors with two constructor
    vector v1;
    vector v2(1.0,2.0,3.0,4.0);

    // Pinrt out both vectors 
    cout << "================ 构造函数 ==============" <<endl;
    v1.print();
    cout << "================ 非构造函数 ==============" <<endl;
    v2.print();

    // Updata the empty vector and display value
    cout << "================ 更新后==============" <<endl;
    v1.update(5.0,5.0,7.0,7.0);
    v1.print();

    return 0;
}
