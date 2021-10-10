// This file contains the interface for our inheritance
// By: clay liu

#include <iostream>
#include <string>

using namespace std;

class Vehical {
    // protected: maybe accessed from within class, or inheritded class
    // protected 关键字中的数据 可以被 本类 或者继承的类 访问
    protected:
        string licence;
        int year;
    public:
        // constructor with initialization list (needed for constants)
        // 带有初始化表的构造函数
        Vehical(const string &myLicence, const int &myyear) :
            licence(myLicence),year(myyear) {};
            


}

