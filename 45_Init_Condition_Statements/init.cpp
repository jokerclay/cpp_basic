// This program shows off how the init feature with for conditional and switch 
// statements in C++

#include <iostream>
#include <string>

using namespace std;

int main(){

    // we begin our example with string 
    string hello = "Hello, World in C++17";

    // Before testing we try and find the position 
    auto value1 = hello.find("Hello");
    if(value1 != string::npos){
        cout << value1 << "  - Hello " <<  endl;
    }

    // we need to another name (same space)
    auto value2 = hello.find("World");
    if(value2 != string::npos){
        cout << value2 << "  - World " <<  endl;
    }

    // contain scope using the new init/condition syntax
    if(auto val = hello.find("C++17");val != string::npos){
        cout << "Found c++17 at " << val << " without leaking scope !" <<
            endl;

    }

    return 0;
}
