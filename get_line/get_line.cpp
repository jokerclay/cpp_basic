#include <iostream>
#include<string.h>
using namespace std;

int main()
{
// declaration of variable on the stack 
string message;

cout << "Please enter your message : " ;

// accept input by using getline( ) function
getline(cin, message );



// display accepted message
cout<< "Your message is = "<<message;

return 0;
}
