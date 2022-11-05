// This program shows off the basics of undered maps in C++11 standard
// (implemented via a hash table)
// By: clay liu

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(){
    // Create  a  unordered map of string to integers will use it to store some
    // contants
    // 创建一个 unordered_map 是 字符串 与 double 型
    unordered_map<string,double> contants;

    // Using string for the name of contants
    string pi =  "PI";
    string root2 = "ROOT2";
    string e = "E";

    // Add some contants to the map
    contants[pi] = 3.1459265;
    contants[root2] = 1.414;

    // we can also insert with a method
    // 向 map 中插入 值
    contants.insert(make_pair(e,2.718));

    // Dump all the value in the map 
    // 倒出 map 中的所有值
    }

    // Example of how to check of a value is in the map
    // 检查 一个值是否在 map 中
    string lambda = "LAMBDA";
    // End points to the position after the last elements
    if(contants.find(lambda) == contants.end()){
        cout << "Was not able to find: " << lambda  << endl;
    }
    return 0;


}
