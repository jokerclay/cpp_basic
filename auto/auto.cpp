#include <iostream>
#include <typeinfo>


using namespace std;

int main(){

    int a  = 10;
    int b  = 5;
    auto c  = a + b;

    cout << c << endl;

    string name = "clay";

    auto d  = name;
    cout << d + " liu" << endl;



    int m  = 10;
    double n  = 15;
    auto f  = m + n;

    cout << f << endl;

    cout << typeid(f).name()<< endl;

    return 0;
}

