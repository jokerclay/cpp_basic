// This program show off the array in c++
// By: clay liu
#include<iostream>
using namespace std;

int main(){
    // Declare integer array 
    int a[10];

    // Initialize integer array
    for(int i = 0; i < 10; i++){
        a[i] = i;
    }

    // Print out array
    for(int i = 0; i < 10; i++){
        cout << "Index " << i << ".value " << a[i] << ". address " << &a[i] << endl;
    }
    cout << endl;

    // Declare and initialize integer array at the same time
    int  b[] = {10,11,12};
    for(int i = 0; i < 3; i++){
        cout << "Index " << i << ", value " << b[i] << endl;
    }
    cout << endl;

    // Pointer arithmetic
    int *ptr = b;
    cout << "b[0] = *ptr = " << *ptr << endl;
    // the compliter KNOWS that ptr is a pointer, and it will move 4 byte 
    // in the memery
    ptr ++;
    cout << "b[1] = *(ptr++) = " << *ptr << endl;
    cout << endl;
    
    // This letters can be changed!
    char hw_array[] = {'h','e','l','l','o',',','w','o','r','l','d'} ;

    // This are in read-only memory(letters are fixed)
    const char *hw_string = "HELLO,WORLD";

    // print out both of the hello world
    cout << hw_array << endl;
    cout << hw_string << endl;

    





    return 0;
}
