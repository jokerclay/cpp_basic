#include<iostream>
using namespace std;

int main(){

    // Declear variables
    int b;
    int a;
    int sum;
    const char* some_string = "heyy there ~\n";

    float pi = 3.1415926;
    double x = -1.5e6;
    double x1 = 1.5e6;

    double y = -1.5e-3;
    double y1 = 1.5e-3;

    bool handsome  = true; 

    short short_type = -100;
    long long_type = 100000000;
    long long long_type2 = 10000000000000000;

    // 有符号
    signed int  signed_int1 = -12;
    signed int  signed_int2 = +12;

    // 无符号
    unsigned int  unsigned_int = 12;

    // initalizes variables
    a = 5;
    b = 10;

    // compute sum
    sum = a + b;

    // print out sum
    cout << "The sum of " << a << " and " << b << " is " << sum << endl;

    cout << some_string <<endl;

    cout << pi <<endl;

    cout << int(x) <<endl;
    cout << int(x1) <<endl;

    cout << y<<endl;
    cout << y1<<endl;

    cout << short_type <<endl;
    cout << long_type <<endl;
    cout << long_type2 <<endl;

    cout << signed_int1  <<endl;
    cout << signed_int2  <<endl;



    cout << unsigned_int  <<endl;


    cout << "Are you handsome? " << handsome <<endl;

}
