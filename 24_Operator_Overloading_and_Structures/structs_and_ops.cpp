// 操作符的重载
// By: clay  liu

#include <iostream>

using namespace std;

// struct 和 class 很像， struct 与 class 的不同是 class  有  public, private..
// struct 中的所有数据都是 public 的
struct USCurrency{
    int dollars;
    int cents;
    // Constructors with default values
    // 构造函数默认值,如果 dollars 和 cents 没有給任何值就设为 0
    USCurrency(const int d=0, const int c=0):dollars(d),cents(c) {}
};

// Overload the  ' + ' opeator to add two structures
// 使用 ' + ' 操作符将两个 struct 相加
USCurrency operator+(const USCurrency m, const USCurrency o){
    USCurrency tmp(0,0);
    tmp.cents  += m.cents + o.cents;
    tmp.dollars += m.dollars + o.dollars;

    if(tmp.cents >=100){
        tmp.dollars += 1;
        tmp.cents -= 100;
    }
    return tmp;
}

int main(){
    // create to struct with different values
    USCurrency wallet_1(5,50);
    USCurrency wallet_2(6,75);

    // create a new struct and make it equal to the sum of the two wellets
    USCurrency wallet_3 = wallet_1 + wallet_2;

    // print out the result 
    cout << "$" << wallet_3.dollars << "." << wallet_3.cents  << endl;

    return 0;
}
