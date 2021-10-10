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
        // 带有初始化表的 构造函数,对于恒定不变的值需要这样做
        Vehical(const string &myLicence, const int &myYear)
            : licence(myLicence),year(myYear) {}
        const string &getLicense() const {return licence;}
        const int getYear() const {return year;};
};
// Car class inherits from Vehical class 
// Public lets us keep original access specifiers

class Car : public Vehical {
    private:
        string style;
    public:
        // Another initialization list 
        Car(const string &myLicence, const int myYear, const string myStyle)
            : Vehical(myLicence, myYear ), style(myStyle){}
        const string &getStyle() const {return style;};
};

// Truck class that also inherits from Vehical 
class Truck : public Vehical {
    private:
        int bed_length;
    public:
        // Another initialization list 
        Truck(const string &myLicence, const int myYear, const int myBedLength)
            : Vehical(myLicence, myYear ),bed_length(myBedLength) {}
        const int &getBedLength() const {return bed_length;};
};













