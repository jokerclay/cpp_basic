// This program shows of the basic of Variants(变体) in c++17
// compile command:
//  g++ --std=c++17 -o Variants Variants.cpp

#include <variant>
#include <iostream>
#include <cassert>

using namespace std;

int main(){
    // Variants are type-safe unions 
    // Unlike unions, variants know what type they currently hold 

    // 这个变体中有 int 有 float 其中一个是 active 的
    variant<int, float> v, w;

    // Set v to have an int 
    // We can not get<int> on v
    // get<float> will get a error

    // set the  int field to be active
    v = 12;

    // We can also set variants in  a number of ways 
    // Get the in from v
    w =  get<int>(v);
    // Get the int at postion 0;
    w = get<0>(v);

    // Just use assignment and ignore get
    w = v ;

    // Indexing our of bounds, or using an type that doesn't exist in the 
    // variant will throw an error 
    try{
        // This will clearly fail because int is active 
        get<float>(w);
    }catch(const bad_variant_access&) {
            cout << "The float field isn't active right now ! " << endl;
        }

    return 0;
}

