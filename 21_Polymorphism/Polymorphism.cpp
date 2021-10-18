// This program is showcase polymorphism in C++
// By: clay liu

#include "interface.h"
using namespace std;

int main(){
    // create three obejcets.One car, one truck, one generic vehicle

    Car car1("沪55695",2019,"Four-door");
    Truck truck1("豫4566894",2014,7);

    // only valid if vehicle is not a abstract class 
    Vehicle v1("VANITY",1975);

    // This calls the appropriate version of getDiscription()
    // Similar to function overloading 
    cout << car1.getDiscription() << endl;
    cout << truck1.getDiscription() << endl;

    // only valid if Vehicle is not a abstract class
    cout << v1.getDiscription() << endl;

    // both of these obejcets are  derived from vehicle , so we can represent 
    // them as their as their parent class
   
    Vehicle *v2 = &car1;
    Vehicle *v3 = &truck1;

    // this will still call the child class medthod of getDiscription()
     cout << v2->getDiscription() << endl;
     cout << v3->getDiscription() << endl;

    return 0;

}
