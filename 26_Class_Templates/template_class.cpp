// This  program shows of templated classes in C++
// By clay liu

#include <iostream>
#include "interface.h"

using namespace std;

int main(){
    // Initialize a new point object using integer
    // 整型初始化一个 point 类
    Point<int> p1(1,2);

    // Initialize a new point object using floats
    // 浮点型初始化一个 point 类
    Point<float> p2(0.54,1.92);

    // Print out integer from p1
    cout << "P1 X = " << p1.getX() << endl;
    cout << "P1 Y = " << p1.getY() << endl;

    // Print out integer from p2
    cout << "P2 X = " << p2.getX() << endl;
    cout << "P2 Y = " << p2.getY() << endl;

    return 0;
}
