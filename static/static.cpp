#include <iostream>

using namespace std;

int add(int x) {

    int static sum = 0;

    sum += x;

    return sum;
}
int main () {

    cout << add(5) << endl;
    cout << add(5) << endl;
    cout << add(5) << endl;
    cout << add(5) << endl;
    cout << add(5) << endl;
    cout << add(5) << endl;
    return 0;
}
