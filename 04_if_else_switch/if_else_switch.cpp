// this program is show of control flow using the if, else, and switch
// statement
// By clay liu


#include<iostream>

using namespace std;

int main()
{
    // Declare and initalize variables
    int a = 4;
    int b = 1;

    // if statement
    if (a == 5)
    {
        cout << "Inside if statement (a == " << a << ")" << endl;
    }



    // if and else statement
    // if 后面的表达式 为真 时
    // 执行 if 后 花括号的内容
    // else if 也是
    // 只有 if 和 之后 的 else if 都为假的时候
    // 才执行 else 的 内容

    if(a > 5 )
    {
        cout << "a > 5 (within if else statement)" <<endl;
    }
    else if(b == 10)
    {
        cout << "b == 10 (within else if )" <<endl;
    }
    else{
        cout << " any other case" << endl;
    }


    // switch statement
    switch (a){
        case 4 :
            cout << a << " == 4 (within case 4)" << endl;
            break;
        case 6 :
            cout << a << " == 5 (within case 6)" << endl;
            break;
        default:
            cout << a << " == 5 (within case 6)" << endl;
    }

    return 0;

}
