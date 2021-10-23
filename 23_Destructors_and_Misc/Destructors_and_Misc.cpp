
#include <iostream>
#include "interface.h"

using namespace std;

int main(){

    // create a new integer array using our class
    IntegerArray ia1(10);

    // Fill the array with some values
    for(int i = 0; i< ia1.size; i++){
        ia1.data[i] = i;
    }

    // Copy the Object, but this only will  be destoryed after
    // it leave the scope of the if statement 
    if(true){
        IntegerArray ia2 = ia1;
    }

    return 0;
}
