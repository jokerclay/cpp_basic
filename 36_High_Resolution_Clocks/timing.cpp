// This program shows off high resoluion clock in the c++11 standard
// By: clay liu

#include <iostream>
#include <chrono>
#include <stdlib.h>

using namespace std;
using namespace std::chrono;

// Helper function for getting the current  time for profiling 
// 获取当前时间函数
high_resolution_clock::time_point get_time(){
    // return the current time in that timmer
    return high_resolution_clock::now();
};

int main(){
    // Vector size
    int N = 1 << 25;

    // Allocate 3 arrays
    int *a = new int[N];
    int *b = new int[N];
    int *c = new int[N];

    // Initialize the vectord
    for (int i = 0; i < N; i++){
        a[i] = rand()% 100 +1;
        b[i] = rand()% 100 +1;
    }

    // Perform and profile vector addition
    auto begin = get_time();
    for(int i = 0; i < N; i++){
        c[i] = a[i] +b[i];
    }
    auto end = get_time();

    // compute the execution time
    auto span = duration_cast<duration<double>>(end - begin);
    cout << "Elapsed time : " << span.count() << "  s" << endl;
    auto span_ms = duration_cast<duration<double,milli>>(end - begin);
    cout << "Elapsed time : " << span_ms.count() << "  ms" << endl;
    auto span_ns = duration_cast<duration<double,nano>>(end - begin);
    cout << "Elapsed time : " << span_ns.count() << "  ns" << endl;




    // Free memory
    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}
