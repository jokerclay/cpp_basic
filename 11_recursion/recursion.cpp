// This program has recursive implementation of fibonacct and factorial 
// By: clay liu

#include<iostream>

using namespace std;

// 求 n 的阶乘
// Calculate factorial (assume positive number )
// e.g 5! =  5 * 4 * 3 * 2 * 1 = 120
int factorial(int n){
    cout << n <<endl;
    if(n <= 1){
        return 1;
    }else{
        return(n * factorial(n-1));
    }
}

// 1 1 2 3 5 8 13 
// 求 第 n 个 斐波那契数
// print the nth digit the fibonacct sequence (assume postive number)
// e.g. for n = 5, fibonacci(5) = (n-2 + n-1) = 2 + 3 = 5;
int fibonacci(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    } else{
        return (fibonacci(n-2) + fibonacci (n-1) );
    }
}
int main(){

    // Initialize and delare number of iterations
    int n_factorial  = 5;
    int result_factorial;
    int n_fibonacci = 6;
    int result_fibonacci;
    
    // call  factorial and fibonacci functions
    result_factorial = factorial(n_factorial);
    result_fibonacci = fibonacci(n_fibonacci);

    // print result 
    cout<< n_factorial  << " 的阶乘是 ：" << endl;
    cout << n_factorial << "!= " << result_factorial << endl;

    cout<< "n = 5" << n_factorial << endl;
    cout << "The 5th digit of fibonacci is " << result_fibonacci << endl;

    return 0;
}
