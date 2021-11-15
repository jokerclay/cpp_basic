#include <iostream>
#include "functions.h"

using namespace std;

int main(){
   // compute the square of some number "N"
   int N = 3;
   cout << "The square of " << N << " is " << square(N) << endl;

   // compute the cube of number "N"
   cout << "The cube of " << N << " is " << cube(N) << endl;
  return 0;
}
