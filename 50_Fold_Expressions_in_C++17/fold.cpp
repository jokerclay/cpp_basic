/**
 * compile command:
 *
 *     g++ --std=c++17 -o  fold fold.cpp 
 *
 * */

#include <iostream>

using namespace std;

// we have seen varidic templates before, but now we don't have to do the 
// unpacking

template<typename ...Args>

void prints(Args... args){
    // of the form (int op ... op  pack)
    // EXpands to:((init op pack1) op pack2...)op packN
    (cout << ... << args) << endl;
}




// we can do it to reduce something like a sum to a single line !
template <typename ...Args>

auto sum(Args ...args){
    // Of the form: (... op pack)
    // EXpands to ((pack1 to pack2 ) op ... ) op packN
    return (args + ... );

    // This equivilant(but 0 can be any number )
    // return (args + ...  + 0);
    // return (args + ...  + 2);
}


int main(){
    // Use our simple prints varidic template w/ folding 
    prints(1, " hello ", 3.14);


    // Use our simple sum varidic template with folding
    prints(sum(1,2,3,4,5));

    return 0;
}

