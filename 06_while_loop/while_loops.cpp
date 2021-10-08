// this program  shows off c++ while/do loops doing multiplicand
// using successive addition
// By clay liu


#include<iostream>
using namespace std;

int main(){

    // Declare and initialize variable
    int multiplicand  = 5;
    int multiplier = 10;
    int product = 0;

    // compute 5 * 10 using addition
     
    cout << "================= using while(){} =================" <<endl;
    while (multiplier > 0){
        product += multiplicand;
        multiplier--;
    }
    cout << "multiplier = " <<multiplier << ", product = " << product << endl;

    cout << "================= using do{}while() =================" <<endl;
    // reset product, leave multiplier still at 0
    product = 0;
    do{
        product += multiplicand;
        multiplier--;
    }while(multiplier > 0);
        cout << "multiplier = " <<multiplier << ", product = " << product << endl;





    return 0;
}
