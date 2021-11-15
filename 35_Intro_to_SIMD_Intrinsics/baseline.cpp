// This program show off the standard code to compare against AVX
// By: clay liu
#include <iostream>

using namespace std;

int main(){
    // Normal arrays packed with evens and odds floating point number
    // 浮点数 数组 奇数和偶数
    float evens[] = {2.0,4.0,6.0,8.0,10.0,12.0,14.0,16.0};
    float odds[] = {1.0,3.0,5.0,7.0,9.0,11.0,13.0,15.0};

    // Output array
    // 输出 为 8 位的数组，初始化为 0
    float result[8] = {0};

    // Do the subtraction
    // 做减法运算
    for (int i = 0; i <8; i++){
        result[i] = evens[i] - odds[i];
    }

    // Print out the result
    cout << "Result :";
    for (int i = 0; i <8; i++){
        cout  << result[i] <<" ";
    }
    cout <<endl;

    return 0;
}
