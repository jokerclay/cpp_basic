#include <iostream>
#include <string>

using namespace std;

/*---------------------------- 车 基类 ---------------------------------------*/
class Vehicle{
    protected:
        string licence;
        int year;
    public:
        // Constructor with initialization list(need for constants)
        Vehicle(const string &myLicense, const int &myYear)
            :licence(myLicense), year(myYear){}

        const string &getLicence() const {return licence;}

        const int &getYear() const {return year;}

        virtual const string getDiscription() const {return licence + " from " + to_string(year);}
        // 如果 使用 virtual 关键字的话，car 和 truck 只会找到它 基类 的 getDiscription(), 
        // 使用 virtual 后，可以动态的 找到它自己正确的 getDiscription()
       // const string getDiscription() const {return licence + " from " + to_string(year);}

       
        // This line of code below make Vehicle a abstract class and
        // getDiscription() pure virtual
        // virtual const string getDiscription() const = 0;
};


/*---------------------------- 继承车的 汽车类 -------------------------------*/
// Car class inherits from Vehicle class
// Public make us keep original accsess specifiers


class Car:public Vehicle {
    private:
        string style;
    public:
        // Another initialization list
        Car(const string &myLicense, const int myYear, const string myStyle)
            :Vehicle(myLicense,myYear),style(myStyle){}
        const string &getStyle() const {return style;}
        const string getDiscription() const {return licence + " from " + to_string(year) + " with style " + style;}
};


/*---------------------------- 车的继承=>卡车类-------------------------------*/
// Truck class also inherits from Vehicle
class Truck:public Vehicle{
    private:
        int bed_length;
    public:
        // Another initialization list
        Truck(const string &myLicense, const int myYear, const int myBedLength)
            :Vehicle(myLicense,myYear), bed_length(myBedLength){}
        const int &getBedLength() {return bed_length;}
        const string getDiscription() const {return licence + " from " + to_string(year) + " with bed length " + to_string(bed_length);}
};











