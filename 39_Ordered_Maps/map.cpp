// This program shows off ordered maps from the C++ stardard 
// By: clay liu

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){

    map<int,int> ordered_map;

    // Add three elements to the map 
    // 在 map 中 添加三个元素
    ordered_map[9] = 9 * 9;
    ordered_map[4] = 4 * 4;
    ordered_map[1] = 1 * 1;

    // Print keys and values of the map 
    // 打印出 map 中的 key 和 value
    // Implemented with a self-balancing red-black tree
    for(auto itr = ordered_map.begin(); itr != ordered_map.end(); itr++){
        cout << "Key :" <<  itr->first << " Value: " <<itr->second << endl;
    }

    // Let's use string as the key to  our map 
    string animal1 = "aardvark";
    string animal2 = "baboon";
    string animal3 = "zebra";

    // create a ordered map indexed by the key 
    // 创建 字符串和 数字 的键值对
    map<string, int> animals;
    // Insert using the inert method
    // 插入值
    animals.insert(make_pair(animal1,10));
    animals.insert(make_pair(animal3,10));
    animals.insert(make_pair(animal2,10));

    // Print contents of the map 打印出map中的值
    // 会以字母表的顺序打印出来
    // Note: This sorted lexicographic order for string
    for(auto itr = animals.begin(); itr != animals.end(); itr++){
        cout << "Key :" <<itr->first << " Value: " <<itr->second << endl;
    }
    return 0;
}
