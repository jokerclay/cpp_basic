#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

struct Person
    {
        std::string name;
        std::string Date;
    };

std::vector<Person> people = {
    {"john doe","1986-11-13"},
    {"jane eyre","1996-06-13"},
};

void sortPeople() {
    std::sort(
            people.begin(),
            people.end(),
            [](const Person& lhs, const Person& rhs) {
                return lhs.name < rhs.name;
            }
    );
}

int main ()
{

    return 0;
}
