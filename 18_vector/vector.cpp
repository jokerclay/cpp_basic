// This program show off vector in c++
// by clay liu
// see more information about vector 
// <a href="https://baike.baidu.com/item/vector/3330482">百度百科</a>

#include <iostream>
#include <vector>

using namespace std;


// 打印出 vector 中的 每个元素
void print_vector(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    // Declare a vector that expands with integers
    // More on templates (<int>) later

    vector<int> v1;

    for(int i = 0; i < 10; i++){
        // 扩展出 10 大小的 vector, 并在其中填入 i
        // Method for expanding vector 
        v1.push_back(i);
    }
    // print the vector
    print_vector(v1);

    // print first element 
    // 打印第一个元素 front() 方法
    cout << "First element : " << v1.front() <<endl;

    // print the last element
    // 打印最后一个元素 back() 方法
    cout << "Last element :" << v1.back() << endl;

    // Print the first element using array like indexing
    // 使用数组的形式打印出第一个 元素
    cout << "First  element using array like indexing : " <<  v1[0] <<endl;

    // clear the  vector and print out it's size
    // 将 vector 清空, 并打印 vector 的 大小
    v1.clear();
    cout << "The size of this cleared vector is : " << v1.size() << endl;
    print_vector(v1); // 清空的 vector 打印出来是空的一行


    // Resize the vector and print size and vector
    // 重置 vector 的大小
    v1.resize(10);
    print_vector(v1);
    cout << "Resized vector size is :" << v1.size() << endl;
    print_vector(v1);


    // Reinitialize vector 
    // 重新初始化 vector 每个赋值为 i
    for (int i = 0; i < 10; i++){
    // Method for expanding vector 
        v1.at(i) = i;
    }
    
    // Insert into the vector before a chosen position
    // 在选定的元素之前插入 一个元素
    // 第一个参数是 插入的位置，第二个参数是 要插入的元素的值
    v1.insert(v1.begin()+4,66);
    print_vector(v1);

    // Erase an element at  a  specific position
    // 移除一个特定的元素
    // 移除方法只有一个参数，就是要移除参数的位置
    // 移除该元素之后，后面的值会紧跟上来
    v1.erase(v1.begin() + 2);
    print_vector(v1);

    // Erase the end element
    // 移除最后一个元素
    // 移除最后一个元素没有参数
    v1.pop_back();
    print_vector(v1);

    return 0;
}




