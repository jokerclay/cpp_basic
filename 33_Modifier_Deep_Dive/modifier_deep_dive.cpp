// This program shows off some of the modifier in C++
// By: clay liu

#include <iostream>

using namespace std;

// This function shows of how a static variable is persistant between function 
// calls
void static_count(){
    // Initialize a static variable 初始化静态变量
    // This is persistant(反复出现的) between function calls
    static int count = 0;

    // print the current value of count
    cout << "Count = " << count << endl;

    // Incrment the static variable
    count++;
};


class flagClass{
    private:
        // create a mutable variable
        // These can be modified from a const member function
        mutable int accesses;
        bool flag;
    public:
        // constructor
        flagClass(bool f){
            accesses = 0;
            flag = f;
        }

        // Method that returns the flag, and counts accesses 
        bool get_flag() const{
            // Even though this is constant we can modifiy access
            accesses++;
            cout << "Accesses incremented to " << accesses << endl;
            return flag;
        }
};

int main(){

    // call the static variable example function 5 times

    for(int i = 0; i < 5; i++){
        static_count();
    }
    // create a  constant class 
    // This can not be modified after creation
    const flagClass fc(true);

    // call the get_flag method after  print the result and number of accesses
    bool flag;
 
    for(int i = 0; i < 5; i++){
        flag = fc.get_flag();
        cout << "Flag: " << flag << endl;
    };

    return 0;
}



