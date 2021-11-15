#include <iostream>
#include "square.h"
#include "cube.h"

using namespace std;

int main(){
    // include 就相当于 copy paste
    // mian.cpp 包含 square.h
    // cube.h 中也包含 square.h
    // 此时造成不合法现象
    // 就像是出现如下情况：
    //      int function1(int  a){
    //
    //      }
    //      int function1(int  a){
    //
    //      }
 
    // 原因： 重复 int square(int a){} 函数
    // 我们看一下 预处理就可以看到


  // compute the square of some number "N"
   int N = 3;
   cout << "The square of " << N << " is " << square(N) << endl;

   // compute the cube of number "N"
   cout << "The cube of " << N << " is " << cube(N) << endl;
  return 0;
}
