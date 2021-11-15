#include <iostream>
#include <string>
using namespace std;

// this is the base case for our recursive function
// 递归函数的基类
template <typename T>
T adder(T v){
   cout<< __PRETTY_FUNCTION__ << endl; // print out how this function was called
   return  v;
}
// Variable number of input argument in a template
// "typename... Args" is  a template parameter pack
// "Args ... args " is a function parameter pack
// We can use recursive calls unpack all the arguments

template <typename T,typename... Args>
T adder(T first, Args... args){
    cout<< __PRETTY_FUNCTION__ << endl;
    return first + adder(args...);
}

int main() {
//  we can calculate a sum with a variable number of floats
    int int_sum = adder(1,2,3,4,5);
    cout << "The integer sum is  " << int_sum<< endl;

//  we can calculate a sum with a variable number of floats
    float float_sum = adder(1.5,2.5,3.5,4.5,5.5);
    cout << "The float sum is  " << float_sum << endl;


//    Declare some  string we want to combine
    string partial_1 = "This ";
    string partial_2 = " does";
    string partial_3 = " Concatenation ";

//    we can calculate a sum with a variable number of floats
    string  concatenate = adder(partial_1,partial_2,partial_3);
    cout << concatenate << endl;

    return 0;
}


