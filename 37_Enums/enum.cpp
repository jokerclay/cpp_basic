// This program shows off the basics of enums in C++
// By: clay liu

#include <iostream>

using namespace std;

// Enums allows us to give more meaning to integers 
// Enums 让我们给整型数字更多的含义
// Similar to a new data-type, but it just a subset of integers
// 与 自己写一个数据类型很相似，实际上只是整型数据的一个子数据类型
enum suit_t{
    // 不一定 一定要赋值
    //
    // CLUBS    也是可以的
    CLUBS    = 0,
    DIAMONDS= 1,
    HEARTS  = 2,
    SPADES  = 3
};

// Had we used an integer here, it would be easier to  mistakenly have an
// out-of-bounds accesss. Restricting to the enum prevents this.
// print_suit 自己写的函数，接受一个数据类型是 suit_t 的数据类型 叫 suit
// 返回一个数组中的元素
const char* print_suit(const suit_t suit){
    const char *names[] = {"Clubs","Diamonds","Hearts","Spades"};
    return names[suit];
}

int main(){
    // Make two suit_t variables 
    // suit_t 类型的 card1 
    // suit_t 类型的 card2
    suit_t card1 = CLUBS; // CLUBS = 0
    suit_t card2 = SPADES; // SPADES = 3

    // print out the string from our funciton, and the acctual value
    cout <<"card1 is a  " << print_suit(card1) << " with value " << card1 <<
        endl;
    cout <<"card2 is a  " << print_suit(card2) << " with value " << card2 <<
        endl;
    return 0;

}









