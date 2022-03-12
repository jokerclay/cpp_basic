# 什么是位运算符 ？
```

>> 向右移 shitf right
<< 向左移 shitf left
 ~ 取反   bitwise NOT
 | 或     bitwise OR
 & 且     bitwise AND
 ^ 异或   bitwise XOR

```

```C++
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

```

```
pls enter 2 integers
6
3
011
11
a << b  48
000011
a >> b  0

~a      -7
111
a | b   7
111
a & b   2
01
a ^ b   5
101

```
