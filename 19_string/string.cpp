// This program is show off strings in C++
// By: clay liu

#include <iostream>
#include <string>

using namespace std;

int main(){
    // Declare a new string
    string str1;

    // unlike C-sting, these do't have to be constant
    str1 = "This is example string";


    // print out the first string
    cout << str1 << endl;

    // Declare and initialize another sting
    string str2 = "This is a another string";

    // Swp the two strings and print
    // swap() 方法将两个字符串交换
    str1.swap(str2);

    cout << "Swaped str1 is :" << str1 << endl;
    cout << "Swaped str2 is :" << str2 << endl;

    // Replace all the characters with 'a'  and print
    // at 方法 找 字符串中的 某个位置的 字符与 srt1[1] 功能一样

    for (int i = 0; i < str1.size(); i++ ){
        str1.at(i) = 'a';
    }
    cout << str1 <<endl;

    // Print out string size and capacity (容量,量)
    cout << "Size :" << str1.size() << endl;
    cout << "Capacity :" << str1.capacity() << endl;
 




    // size 和 capacity 的不同
    // size :
    //The vector size is the total number of elements of a vector and it always 
    //the same for all compilers. To get the size of a vector
    // capacity ：
    // Capacity is the memory space occupied by a vector; elements of a vector 
    // are stored as an array in the memory. Thus, the capacity is the amount 
    // of space which is currently using by the vector (or internal array). It 
    // will also equal to greater than the size of the vector. It may differ on 
    // the different compiler. To get the capacity of a vector, 
    // vector::capacity() function is used


    // Re-size the string size to 5 characters and print the size and 
    // the capacity
    str1.resize(5);
    cout << str1 << endl;
    cout << "Size :" << str1.size() << endl;
    cout << "Capacity :" << str1.capacity() << endl;
    

    // Call shink to fit to match the number of characters

    str1.shrink_to_fit(); // shrink_to_fit() 不会减小到 5， 只会减一点
    cout << str1 << endl;
    cout << "Size :" << str1.size() << endl;
    cout << "Capacity :" << str1.capacity() << endl;
    
    return 0;
}

