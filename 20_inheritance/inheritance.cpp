// This program showcase how inheritance can be used in C++
// By： clay liu

#include "interface.h"

using namespace std;

int main(){
    // create two different car classes
    Car car1("ABC-123",2003,"four-door");
    Car car2("皖1314",2019,"Two-door");

    // Print out licence using common method from base class
    cout << "Car 1 License: " <<car1.getLicense() <<endl;
    cout << "Car 2 License: " <<car2.getLicense() <<endl;

    // print out the year of each car
    cout << "Car 1 year: " <<car1.getYear() <<endl;
    cout << "Car 2 year: " <<car2.getYear() <<endl;

    // print out style
    cout << "Car 1 style: " <<car1.getStyle() <<endl;
    cout << "Car 2 style: " <<car2.getStyle() <<endl;

    // create  a Truck object 
    // Print out using Vehical, and Truck-specific methods
    Truck truck1 ("沪456749",2020,7);
    cout << "truck 1 License: " <<truck1.getLicense() <<endl;
    cout << "truck 1 Year: " <<truck1.getYear() <<endl;
    cout << "truck 1 Bed Length: " <<truck1.getBedLength() <<endl;

    return 0;
}

