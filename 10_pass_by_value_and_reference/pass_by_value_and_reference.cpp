// This program show off function for multiplication that use pass by value 
// and pass by reference respectively 
// By: clay liu 

#include<iostream>
using namespace std;

void multiply_pbv(int a, int b, int p){
    p = a * b;
    cout << "pass by value, product = " << p << endl;
}

void multiply_pbr(int &test, int &b, int &p){
    p = test * b;
    cout << "pass by reference, product = " << p << endl;
}

int main(){
    // Declare and initialize vriables
    int multiplier = 5;
    int multiplicand = 10;
    int product = 0;


    // call pass by value implementation 
    multiply_pbv(multiplier, multiplicand, product);

    // print out product again 
    cout << "Main function product is " << product << endl;

    cout << "---------------------------------" << endl;

    // call pass by reference implementation 
    multiply_pbr(multiplier, multiplicand, product);

    // print out product again 
    cout << "Main function product is " << product << endl;

    return 0;
}
