// this program  shows off nested  c++ 
// By clay liu


#include<iostream>
using namespace std;

int main(){

    // Declare and initialize variable
    int multiplicand  = 5;
    int multiplier = 10;
    int product = 0;

    
    // compute 5 * 10 using addition
    cout << "Before loop product = " << product << endl;

    for(int i = 0; i < multiplier; i++){
        product += multiplicand;

        // Print out 5th iteration 
            if( i == 4){
               cout << "iteration " << i << ": product = " << product << endl;
               cout << "iteration " << i << ": product = " << product << endl;
               cout << "heyyy " << endl;
               for(int j = 0; j<100; j++){
                   cout<< j << endl;
               }
              
            }else{
                // Immediatly proceed to next iteration 
                continue;
            }
            cout << "this is printed only on iteration : " << i << endl;
        }
    cout << "product = " << product <<endl;
    return 0;
    
    }
    












