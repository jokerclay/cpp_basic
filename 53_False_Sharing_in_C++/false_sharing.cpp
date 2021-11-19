// This program shows off the sever imploications of false sharing in c++ using
// std::acomic and std::thread

#include <thread>
#include <atomic>
#include <iostream>

using namespace std;

// Simple function for incrememnting an atomic int
void work(atomic<int>& a ){
    for(int i = 0; i < 10000; i++){
        a++;
    }
}

// Simple single-thread function that calls work 4 times
void single_thread(){
    atomic<int> a;
    a = 0;

    work(a);
    work(a);
    work(a);
    work(a);
}

// Tries to parallelize the work across multiple thread 
// However, each core invalidates the other cores copies on write 
// This is an Extreme example of poorly thought out code
void same_var(){
    atomic<int> a;
    a = 0;

    // Create four threads and use a lamdba to launch work

    thread t1([&](){ work(a); });
    thread t2([&](){ work(a); });
    thread t3([&](){ work(a); });
    thread t4([&](){ work(a); });

    // join the thread
    t1.join();
    t2.join();
    t3.join();
    t4.join();
}


void diff_var(){
    atomic<int> a;

    a = 0;
    cout << "Address of a: " << &a << endl;
    atomic<int> b;
    b = 0;
    cout << "Address of b: " << &b << endl;
    atomic<int> c;
    c = 0;
    cout << "Address of c: " << &c << endl;
    atomic<int> d;
    d = 0;
    cout << "Address of d: " << &d << endl;




    // Launch the four threads now using our aligned data
    thread t1([&](){ work(a); });
    thread t2([&](){ work(b); });
    thread t3([&](){ work(c); });
    thread t4([&](){ work(d); });

    // join the threads
    t1.join();
    t2.join();
    t3.join();
    t4.join();

};

// simple fix, just make sure we can not get two atomics on the same cache line
struct alignas(64) aligned_typed{
    atomic<int> a ;
};
void diff_line(){
    aligned_typed a;
    a.a = 0;
    cout << "Address of a: " << &a << endl;
    aligned_typed b;
    b.a = 0;

    cout << "Address of b: " << &b << endl;
    aligned_typed c;
    c.a = 0;

    cout << "Address of c: " << &c << endl;
    aligned_typed d;
    d.a = 0;

    cout << "Address of d: " << &d << endl;
    
    // Launch the four threads now using our aligned data
    thread t1([&](){ work(a.a); });
    thread t2([&](){ work(b.a); });
    thread t3([&](){ work(c.a); });
    thread t4([&](){ work(d.a); });

    // join the threads
    t1.join();
    t2.join();
    t3.join();
    t4.join();

}

int main(){

     single_thread();
    // same_var();
    // diff_var();
    // diff_line();

    return 0;
}





