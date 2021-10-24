// This program shows off smart pointers from the C++11 standard
// By: clay liu

#include <iostream>
#include <memory>

using namespace std;

int main(){
    // create a shared pointer 
    // 创建共享指针
    // Shared pointer are valid while at LEAST one shared pointer points to data
    // 共享指针至少有一个共享指针是指向数据的才有效

    shared_ptr<int> shared_int_1(new int(5));
    shared_ptr<int> shared_int_2 = shared_int_1;

    cout << "-==== 该段内存有两个共享指针 ====-"  << endl;
    // Print out use cout
    cout << "Use count of shared_int: " << shared_int_1.use_count() << endl;

/*----------------------------------------------------------------------------*/
    // create a weak pointer 
    // Weak pointer point to a memory, but are not an "owner"
    // Good when we don't want a owner, or handling cyclic reference
    weak_ptr<int> weak_int = shared_int_1;

    // Print out use cout
    cout << "-==== 该段内存有两个共享指针,weak_ptr 不算 owner ====-"  << endl;
    cout << "Use count of shared_int: " << weak_int.use_count() << endl;


/*----------------------------------------------------------------------------*/
    // convert a weak_ptr to a shared_ptr and print out again
    // .lock() 方法将 一个 weak_ptr 转换成了 shared_ptr
    auto shared_int_3 = weak_int.lock();
    cout << "-==== weak_ptr 使用 lock() 升级为共享指针成为 owner ====-" << endl;
    cout << "Use count of shared_int: " << shared_int_3.use_count() << endl;

/*----------------------------------------------------------------------------*/
    // Destory the memory for 2 of the shared pointers and check uniquness
    // 销毁 指针 shared_int_1 和 shared_int_2
    shared_int_1.reset();
    shared_int_2.reset();
    cout << "-==== 将前两个共享指针 reset(), 只剩下一个共享指针 ====-"  << endl;
    cout << "Use count of shared_int: " << shared_int_3.use_count() << endl;
    

/*----------------------------------------------------------------------------*/
    // 检查是否 shared_int_3 是 唯一指向 该内存的 指针
    cout << "-==== 检查是否 shared_int_3 是 唯一指向 该内存的 指针====-"<< endl;
    cout << "is shared_int_3 is unique ?  " << shared_int_3.unique() << endl;

    // 销毁 shared_int_3 指针
    shared_int_3.reset();

/*----------------------------------------------------------------------------*/
    //  check if shared_int_3 is valid 
    // .get() 方法检查共享指针是否有效
        cout << "-==== .get() 方法检查共享指针是否有效 ====-" << endl;
    cout << "shared in is valid: " << shared_int_3.get() << endl;

    // create a unique pointer 
    // 创建唯一指针，只能有一个 owner
    // unique pointers, but are the only owner of memory it points to 
    // Good for exclusive owneship
    unique_ptr<int> unique_int(new int(10));


    return 0;
}
