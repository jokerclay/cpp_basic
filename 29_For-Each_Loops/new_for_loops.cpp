// This program show off some new for loops in c++11 standard
// By: clay liu

#include <iostream>
#include <vector>

using namespace std;

int main(){


    // do for-each on integer element
    // 循环 { } 中的每个元素
    cout <<"=======直接在 { } 中循环 ========" << endl;
    for(int i :{1, 2, 3, 4, 5, 6}){
        cout << i << " " ;
    }
    cout << endl;
    cout << endl;

    // create an integer vector to iterate over
    vector<int> int_vector;
    int temp;

    // fill the vector with random values
    cout <<"======= 在容器中随机放一些值 ========" << endl;
    for(unsigned i = 0; i <6; i++){
        temp = rand() % 100;
        cout << temp << "  ";
        int_vector.push_back(temp);
    }
    cout << endl;
    cout << endl;

    // Use an auto type for each vector element
    // 使用 auto 类型 循环 容器中的每一个元素
    cout <<"======= auto 类型 循环容器中的值 ========" << endl;
    for(auto &i : int_vector){
        // Increment each element in the vector
        i++;
    }

    // Print out the new vector
    for (unsigned i = 0; i < int_vector.size(); i++){
        cout << int_vector[i] << "  ";
    }
    cout << endl;

    return 0;
}
