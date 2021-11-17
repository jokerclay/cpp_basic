#include <stdlib.h>
#include <ctime>
#include <iostream>

using namespace std;

int main(){
    // Number of numbers to add together 
    int N = 10;
    int *sum = new int[1];
    int temp;

    // Add random numbers together
    srand(time(NULL));
    for(int i = 0; i < N; i++){
        temp = rand()%100;
        sum[0] += temp;
    }

    cout << "the sum is " <<sum[0] << endl;

    return 0;
}


