// This program shows off the basic if iterator in C++

#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Create a simple vector of integers
    // 创建一个 整型的容器

    vector<int> int_vec;

    for(int i = 0; i < 10; i++){
        int_vec.push_back(i);
    }

    // While we can index into  a vector like a array, we can use iterators as 
    // a more general mechanism(机制)
    // Let's declare one for our vector

    vector<int>::iterator itr_begin;
    vector<int>::iterator itr_end;

    // When go over a vector, we typically care about start and end points.
    // 谈到 vector 的时候，我们通常只关心 前驱和后继
    // We can get these dealare one for our vector 

    // 前驱
    // itr_begin 指向容器里面的第一个元素
    itr_begin = int_vec.begin(); 
    // 后继
    // itr_end 指向容器里面的最后一个元素的后一位
    itr_end = int_vec.end();

    // we can use these as  bounds for loop
    for(auto i = int_vec.begin(); i!= int_vec.end(); i++){
        // Dereference the iterator just like a point 
        cout << *i << " " ;
    };
    cout << endl;

    // Reverse iterator backward
    for(auto i = int_vec.rbegin(); i!= int_vec.rend(); i++){
        // Dereference the iterator just like a point 
        cout << *i << " " ;
    };
    cout << endl;



    return 0;
}
