#include <iostream>
#include <string>

using namespace std;

class pig{
    public:
        string name;
        int age;

        // 传统的构造函数
        pig(){
            name = "佩奇";
            age = 18;
        };
};

class cat{
    public:
        string name;
        int age;

        // 使用参数表的构造函数, 更加高效, 初始化表达式
        cat() : name("花花"), age(10) {};
};

class dog{
    public:
        string dog_name;
        int dog_age;

        // 自定义构造函数, 多个参数
        dog(string name, int age) : dog_name(name), dog_age(age){};


};




int main() {
    pig p;
    cout << p.name << endl;
    cout << p.age << endl;
    cout << endl;

    cat c;
    cout << c.name << endl;
    cout << c.age << endl;
    cout << endl;


    dog d("大黄",15);
    cout << d.dog_name<< endl;
    cout << d.dog_age<< endl;
    cout << endl;

    return 0;
}
