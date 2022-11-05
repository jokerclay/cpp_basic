// This program is show off strings in C++
// By: clay liu

#include <iostream>
#include <string>

using namespace std;

int main(){

    // 声明字符串类型
    // Declare a new string
    string str1;

    // unlike C-sting, these do't have to be constant, 不连续
    str1 = "This is example string";

    // print out the first string
    cout << str1 << endl;

    // Declare and initialize another sting
    string str2 = "This is a another string";

    // Swp the two strings and print
    // swap() 方法将两个字符串交换
    str1.swap(str2);

    cout << "----------- swap --------------" <<endl;
    cout << "Swaped str1 is :" << str1 << endl;
    cout << "Swaped str2 is :" << str2 << endl;

    // Replace all the characters with 'a'  and print
    // at 方法 找 字符串中的 某个位置的 字符与 srt1[1] 功能一样

    int str1_size = str1.size();

    for (int i = 0; i < str1_size; i++ ){
        str1.at(i) = 'a';
    } 

    cout << "----------- at --------------" <<endl;
    cout << str1 <<endl;

    // Print out string size and capacity (容量,量)
    cout << "----------- size VS. capacity --------------" <<endl;
    cout << "Size :" << str1.size() << endl;
    cout << "Capacity :" << str1.capacity() << endl;
 
    // size 和 capacity 的不同
    //
    // size :
    // The vector size is the total number of elements of a vector and it always 
    // the same for all compilers. To get the size of a vector
    //
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
    cout << "----------- resize to 5 --------------" <<endl;
    cout << str1 << endl;
    cout << "Size : " << str1.size() << endl;
    cout << "Capacity : " << str1.capacity() << endl;

    // Call shink to fit to match the number of characters

    str1.shrink_to_fit(); // shrink_to_fit() 不会减小到 5， 只会减一点
    cout << "----------- shrink_to_fit --------------" <<endl;
    cout << str1 << endl;
    cout << "Size :" << str1.size() << endl;
    cout << "Capacity :" << str1.capacity() << endl;
    


    str1.clear();
    cout << "----------- clear() --------------" <<endl;
    cout << str1 << endl;
    cout << "Size : " << str1.size() << endl;
    cout << "Capacity : " << str1.capacity() << endl;


    
    str1.resize(10);
    str1.insert(2, 10, 'E');
    str1.insert(5, 3, 'h');
    cout << "----------- insert() --------------" <<endl;
    cout << str1 << endl;
    cout << "Size : " << str1.size() << endl;
    cout << "Capacity : " << str1.capacity() << endl;
    cout << "str1 front is " << str1.front() << endl;
    cout << "str1 at 0 is " << str1.at(0) << endl;
    cout << "str1 at 1 is " << str1.at(1) << endl;
    cout << "str1 at 2 is " << str1.at(2) << endl;


    cout << "----------- push_back() --------------" <<endl;
    str1.push_back('M');
    cout << str1 << endl;
    cout << "Size : " << str1.size() << endl;
    cout << "Capacity : " << str1.capacity() << endl;

    cout << "----------- append() --------------" <<endl;
    str1.append("hahaha");
    cout << str1 << endl;
    cout << "Size : " << str1.size() << endl;
    cout << "Capacity : " << str1.capacity() << endl;


    cout << "----------- contains() C++ 23 --------------" <<endl;
    cout << "str1 contains haha " << str1.contains("hi") << endl;
    cout << str1 << endl;
    cout << "Size : " << str1.size() << endl;
    cout << "Capacity : " << str1.capacity() << endl;


    cout << "----------- replace() C++ 20 --------------" <<endl;
    str1.replace(10, 5, "hi");
    cout << str1 << endl;
    cout << "Size : " << str1.size() << endl;
    cout << "Capacity : " << str1.capacity() << endl;

    cout << "----------- string + --------------" <<endl;
    
    string name = "clay";
    cout << name +  "  liu" <<endl;
    



    return 0;
}

