// This Program show off sequential container in the  C++ Standard library 
// C++ 中的容器
// By: clay liu

#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <string>
#include <array>
#include <deque>
#include <algorithm>

using namespace std;

template <typename T>
void print_container(T a){
    for(auto i : a){
        cout << i << " ";
    };
        cout << endl;
}

int main(){
    // Arrays are fixed-sized containers
    // 数组是固定大小的
    // Specify a type and size
    // 特别说明 数组的大小和数据类型
    // Has fast random access
    array<int, 10> int_array = {9,4,3,8,7,0,9,7,4,6};

    // Print the array, sort it, and print again
    // 打印出数组，使用 算法库中的 sort 排序 之后在打印出来
    cout << "Array: " << endl;
    print_container(int_array);

    // 将数字从小到大排列
    sort(int_array.begin(),int_array.end());
    cout << "=== sort后 === " << endl;
    print_container(int_array);
    cout << endl;

    // Vector are flexble-size array (string are similar)
    // Vector 是大小更灵活的数组
    // Specify a type 只有数据类型是特别说明的
    // Has fast random  access, but adding elements to a position other than 
    // the back may be slow
    // 可以任意访问插入元素会慢一些
    // Use vector unless you have a reason to use another container
    // 最好用 vector
    vector<int> int_vector;
    for(int i = 0; i < 10; i++){
        // 添加到最后一个元素
        int_vector.push_back(i * i);
    }

    // Print the vector, remove back elements, then print again
    cout << " Vector " << endl;
    cout << "=== 初始 vector 到 9 * 9 ===" << endl;
    print_container(int_vector);

    // 移除最后一个元素 pop 是移出(pop 冒出，移出 ) push 是移入(push 推进去)
    int_vector.pop_back();
    int_vector.pop_back();
    int_vector.pop_back();

    // 打印移除之后的数组
    cout << "=== 移除后三个操作 ===" << endl;
    print_container(int_vector);
    cout << endl;

    // Forward lists and Lists are singly and doubly linked lists respectively
    // forword_list =>前向链表， Lists =>双向链表
    // Specify a type
    // Fast insert/delete at any point in the list

    list<int> int_list;
    for(int i = 0; i < 5; i++){
        int_list.push_back(i);
    }

    // Print the list 
    // Insert some elements at different positions, then print again
    // 在不同的地方插入元素,再打印出来
    cout << "List: " << endl;
    
    cout << "初始 list: " << endl;
    print_container(int_list);

    // 从头开始增加元素
     auto itr = int_list.begin(); 
    // 从尾开始增加元素
    // auto itr = int_list.end();


    cout << "=== 头部插入 5 ===" << endl;
    int_list.insert(itr,5);
    print_container(int_list);
    
    cout << "=== 5 之后接 6 ===" << endl;
    int_list.insert(itr,6);
    print_container(int_list);

    cout << "=== 5 之前接 7 ===" << endl;
    int_list.insert(int_list.begin(), 7);
    print_container(int_list);

    
    cout << "traverse :" << endl;
    // Benfit of list is that we can traverse(穿过; 横过; 横越; 横渡) backwords
    for(auto r_itr  = int_list.rbegin(); r_itr != int_list.rend(); r_itr++){
        cout << *r_itr <<" ";
    }
    cout << endl << endl;

    // Deque are doubly end queues (双向队列)
    // Specify a type 
    // Fast random access and insert/delete at front and back
    deque<int> int_deque;
    for(int i = 0; i < 5; i++){
        int_deque.push_back(i);
    };

    // Print the deque;
    // Insert some elements at the front of and print again

    cout << "Deque" << endl;
    cout << "初始 Deque: " << endl;
    print_container(int_deque);
    cout << "=== 插入前驱 ===" << endl;

    int_deque.push_front(5);
    int_deque.push_front(6);
    int_deque.push_front(7);

    print_container(int_deque);

    return 0;
};

