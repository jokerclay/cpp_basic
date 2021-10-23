// This program shows how to have different implementations of a C++
// class using a single template
// By: clay liu

#include <iostream>
// <cctype> 处理字符串的库，比如，小写字母转换为大写
#include <cctype>
#include "interface.h"

using namespace std;

int main(){
    // make a integer container using standard template
    Containers<int> int_container(1);

    // make a integer container using special template
    Containers<char> char_container('a');

    // Call method from standard template
    cout << "Increment from orginal template : " << int_container.inc() << endl;
    // Call method from special template
    cout << "Uppercase from orginal template : " << char_container.uppercase() << endl;

    return 0;
}





