// This program shows off basic pointer usage in c++
// By clay liu

#include<iostream>
using namespace std;

int main(){
    // Declare a variable and initialize variable
    int a = 5;

    // Declare a pointer and  initialize pointer

    // *b means: I want a integer pointer
    int *b;
    //  &a means: I want the address of a, this line of code is give the
    //  address of the a to the value of b.
    b =&a;

    // print  value and address 
    cout << "a: value " << a <<", address " << &a << endl;
    cout << "b: value " << b << ", address " << &b << endl;
    cout << "*b = a = " << *b <<endl;
    cout <<endl;

    // Set 'a' a new variable, and check addresses and values 

    a = 10;

    // print values and addresses 
    cout << "a: value " << a <<", address " << &a << endl;
    cout << "b: value " << *b <<", address " << &b << endl;
    cout << "*b = a = " << *b <<endl;
    cout <<endl;

    // Declare two new variables using references
    int c = 3;
    int &d = c;

    // print values and addresses(no dereferencing needed)
    cout << "c: value: " << c  <<", address " << &c <<endl;
    cout << "d: value " << d << ", address " << &d << endl;

    return 0;
}

