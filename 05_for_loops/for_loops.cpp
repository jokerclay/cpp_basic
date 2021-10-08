// this program is show off c++ for loops by doing multiplication using
// successive addition
// By: clay liu

#include<iostream>

using namespace std;

int main(){
    // Declare and initialize variable

    int multiplicand = 5;
    int multiplier = 10;
    int product = 0;

    // compute product of 5 * 10 using addition
    cout <<" before loop. Product = " << product << endl;
    for(int i = 0; i< multiplier; i++){
        product += multiplicand;
        cout << " Iteration " << " i " << ": product = " << product << endl;
    }

    return 0;
}
