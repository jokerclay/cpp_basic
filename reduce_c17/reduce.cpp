#include <iostream>
#include <vector>
#include <numeric>

using namespace std;


int main() {


    cout << "<numeric> is c++ 17 soupport o lot algorithm " << endl;
    cout << "complie command is: g++ --std=c++17 reduce.cpp -o reduce" << endl;
    vector v = {1,2,3,4,5,6};

//     int sum  = reduce(v.begin(), v.end()); 
    int sum  = reduce(v.begin(), v.end(), 0, plus{}); 

    cout << sum << endl;

    return 0;
}



