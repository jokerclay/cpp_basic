#include <iostream>
#include <string>

struct person{
    int age;
    std::string name;
};

int main(){

    person p1,p2;

    p1.age = 21;
    p1.name = "clay";


    person *pptr = &p1;
    (*pptr).age = 33;

    pptr -> age = 44;


    std::cout << p1.name << " is "  << p1.age << " years old. " << std::endl;

    return 0;
}




