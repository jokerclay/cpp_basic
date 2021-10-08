// this program  is show off built in and user defined function to print 
// the size of different data types and  return different values
// By clay liu

#include<iostream>

using namespace std;
// define functions
char print_char(char c){
    cout << "char value " << c << ", char size is "<< sizeof(c) << endl;
    return c; 
}

// define functions
int print_int(int i){
    cout << "char value " << i << ", char size is "<< sizeof(i) << endl;
    return i;
}

// define functions
float print_float(float f){
    cout << "char value " << f << ", char size is "<< sizeof(f) << endl;
    return f;
}

// define functions
double print_double(double d){
    cout << "char value " << d  <<", char size is "<< sizeof(d) << endl;
    return d;
}




int main(){
    // Declare and initialize vriables

    char character = 'a';
    int integer = 4568 ;
    float single_precision = 23.123;
    double double_precision = 495.461;


    // call funcitons 
    character = print_char(character);
    integer = print_int(integer);
    single_precision = print_float(single_precision);
    double_precision = print_double(double_precision);


    // add space between old value and new
    
    cout << "char value " << character << endl;
    cout << "int value " << integer << endl;
    cout << "float value " << single_precision << endl;
    cout << "double value " << double_precision << endl;
    return 0;
}
