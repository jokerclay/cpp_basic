// This program shows the importeance of understanding how function arguments
// are passed in C++

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Load number using pass-by-value
// 值传递
// Use copy construtor in
vector<int> load_numbers_value(vector<int> v){
    // Load the vector with 1k value
    for(int i = 0; i < 1000; i++){
        v.push_back(i);
    }
    // Return the vector
    // Use automatic move on return for pass-by-value param.
   return v;
};

// Load_numbers using pass-by-ref(no move out)
// 指针传递
// no copy construtor 
vector<int> load_numbers_rvalue_ref_1(vector<int>&& v){
    // Load the vector with 1k values
    for(int i = 0 ; i < 1000; i++ ){
        v.push_back(i);
    }
    // Return the vector
    // No longer a by-value parameter, so it uses a copy construtor !
    // Return with a fitted capacity !

    return v;
}
 
// Load_numbers using pass-by-ref(move out)
// no copy construtor 
vector<int> load_numbers_rvalue_ref_1(vector<int>&& v){
    // Load the vector with 1k values
    for(int i = 0 ; i < 1000; i++ ){
        v.push_back(i);
    }
    // Return the vector
    // Explicitly(明确地; 明白地) use the move construtor

    return move(v);
}

 vector<int> load_numbers_ref(vector<int>&& v){
    // Load the vector with 1k values
    for(int i = 0 ; i < 1000; i++ ){
        v.push_back(i);
    }
}


int main(int argc, char *argv[]){
    // Create a vector
    Vector<int> v;

    // Do this step 10 times
    for(int i = 0; i  < 10 ; i ++){
        // cleare the array each time
        v.clear();

       // load a new set of numbers 
       //  v =  v.load_numbers_value(v);
       v =  v.load_numbers_rvalue_ref_1(move(v));
       // v =  v.load_numbers_rvalue_ref_2(move(v));
       // v =  v.load_numbers_ref(v);

    }
    return 0; 
}

