#include <iostream>
#include <string>
#include <typeinfo>
#define MAX_NUM  123

using namespace std;


int main() {

//     const string name = "clay";

    string name = "test";

    cout << name << endl;

    long double third1= 0.3333333333333333333; // may lose digits

    long double third2= 0.3333333333333333333l; // accurate


//     std::complex<float> z(1.3, 2.4), z2;




    int o1= 042; // int o1= 34;

    {
        string ss= "IN scopes"; 
    }

        string ss= "OUT scopes"; 

         cout << ss <<endl;


    string long_string = "heyyyyyyyyyyyyyyyyy\n\n\n"
        "I am really really long !!!";

    long l2 = MAX_NUM;

    long l3 = {MAX_NUM};


    cout << third1 << endl;
    cout <<typeid(third1).name() << endl;

    cout << third2 << endl;
    cout <<typeid(third2).name()<< endl;

    cout << o1 << endl;
    cout <<typeid(o1).name()<< endl;

    cout << long_string << endl;

    cout <<typeid(long_string).name()<< endl;

    cout << l2 << endl;
    cout << l3 << endl;

    return 0;

}




