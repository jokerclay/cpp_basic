// This program is shows the importance of laying out struct in c++

#include <iostream>
using namespace std;

/**
 *
 * Memory order matter !
 *
 * */

// Memory here are aligned based on word size(64-bit on my machine)
struct bad_struct{
    // ID and weight for the first product
    int id_1;
    double weight_1;

    // ID and weight for the second product
    int id_2;
    double weight_2;
};

// Much better !
// Now both the ints will be packed together 
struct good_struct{

    // IDs for the product
    int id_1;
    int id_2;

    // Weights for the product
    double weight_2;
    double weight_1;
};

// Now what happens if we tell the compiler to pack these values ?
// Depends！We could have un-aligned accesses depending on what is in our struct

struct potentially_unsafe_struct{

    // IDs for the product
    char id_1;
    char id_2;

    // Weights for the product
    double weight_1;
//    double weight_2;
}
__attribute__((packed));

// See more about :
// __attribute__((packed));
// <a href="https://docs.oracle.com/cd/E19205-01/820-7599/giqdb/index.html"></a>

int main(){
    // Create an intance of three struct
    bad_struct A;
    good_struct B;
    potentially_unsafe_struct C;


    // Print the size
    cout << "the size of bad_struct is " << sizeof(A) <<  endl;
    cout << "the size of good_struct is " << sizeof(B) <<  endl;
    cout << "the size of potentially_unsafe_struct is " << sizeof(C) <<  endl;

    return 0;
}
