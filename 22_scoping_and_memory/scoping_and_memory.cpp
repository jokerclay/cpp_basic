// This program covers the fundamentals of scoping and memory in C++
// c++ 中的 域和内存
// By: clay liu

#include <iostream>
#include <vector>

using namespace std;
/*----------------------------------------------------------------------------*/
// x is only vaild in this function
// Returing  a pointer would give us a pointer to something
// that is no longer guranteed to us !
// 这个 getPtrBad() 函数中 return 的 x 的 地址只在 getPtrBad() 这个函数中有效
// 当不在这个函数中时，再取 x 的地址中的值，就不是 5 了


int* getPtrBad(){
    // This is allocated on the stack (local variable)
    int x = 5;
    return &x;
}

/*----------------------------------------------------------------------------*/
// The memory location of "x" will be valid untill we de-allocate it
// 内存中申请了的内存会一直有效知道释放该内存
int* getPtrGood(){
    // New allocates memory the size of an int in this case, and it return a
    // pointer to that memory 
    // This allocate on the heap (dynamic alloaction)
    // 本例中开辟一个 int 大小的内存, 会返回一个指针给内存
    // 动态分配在 堆上

    int *x = new int;
    *x = 5;
    return x;
}

/*----------------------------------------------------------------------------*/
int main(){

    // The variable is only valid in the if statement
    // int x ， x 变量只在这个if 语句中有效
    if(true){
        int x = 5;
    }
    // After this point, the memory used store "x" can be (almost) any value
    // 在 if 之外，x 可以是任何值
    
    // Incorrect way to generate a pointer to a number
    // 不好的方法获取指针
    int *p1 = getPtrBad();

    // Correct way to generate a pointer to a number 
    // 较好的方法获取指针
    int *p2 = getPtrGood();

    // Print both pointers
    // Printing the local one is undefined behavior (uncomment could lead to a 
    // segmenttation fault !)
    //
    //
    // cout << " Address :"  << p1 <<" Value : " << *p1 << endl;
     cout << " Address :"  << p2 <<" Value : " << *p2 << endl;

     // if we're done with heap allocated memory, get rid of it
     delete p2;



/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/

     // Use a vector to store all the pointers 
     vector<int*>old_pointers;

     // let's look at an example of why we should free memory 
     // Overwrite a pointer 5 times, and then de-allocate the last using delete
     // Problem ? The first 4 still are allocated

     for(int i = 0; i < 5; i++ ){
         p2 = getPtrGood();
         old_pointers.push_back(p2);
     }
     delete p2;

     // Print all the pointers that are still vaild 
     // Printing the deleted  one is undefined behavior (could lead to a
     // segmentation fault, so do size()-1 )
     for(int i = 0; i < old_pointers.size()-1; i++){
         cout << "Address :" << old_pointers[i] << " Value :" << *old_pointers[i] << endl;
     }


     // New can used on any datatype this includes classes and arrays this array
     // must manually be de-allocated.

     int*array = new int[100];

     // de-allocation does not  need to be one at a time 
     delete[] array;
    return 0;
}

