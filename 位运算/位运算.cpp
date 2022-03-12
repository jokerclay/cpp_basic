#include <iostream>
#include <string>

using namespace std;

string toBinary(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}





int main() {
    int a, b;

    cout << "pls enter 2 integers" << endl;

    cin >> a >> b;
    cout << toBinary(a)<< endl;
    cout << toBinary(b)<< endl;

    
    cout << "a << b\t" << (a<<b) << endl;
    cout << toBinary((a<<b))<< endl;

    cout << "a >> b\t" << (a>>b) << endl;
    cout << toBinary((a>>b)) << endl;

    cout << "~a\t" << (~a) << endl;
    cout << toBinary((~a)) << endl;

    cout << "a | b \t" << (a | b) << endl;
    cout << toBinary((a | b)) << endl;

    cout << "a & b \t" << (a & b) << endl;
    cout << toBinary((a & b)) << endl;

    cout << "a ^ b \t" << (a ^ b) << endl;
    cout << toBinary((a ^ b)) << endl;

    return 0;
}




