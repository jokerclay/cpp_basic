// This program contains a simple benchmark for testing how the SSO help 
// performance on small string 

// command:
//          g++ benchmark.cpp -lbenchmark -lphtread -O3 -o benchmark
#include <benchmark/benchmark.h>
#include <vector>
#include <string>

using namespace std;

static void stringBench(benchmark::State &s){
    // Get the number of character ofr our string 
    int string_len = s.range(0);
    
    // Vector for  hoding the string 
    vector<string> v;
    v.resize(10000);

    // Now let's emplace back a ton of strings
    while(s.KeepRunning()){
        for(int i = 0; i < 10000; i ++){
            // create the string of specified size 
            string str(string_len, 'a');
            v.push_back(str);

        }
    }
}

// Register the benchmark and speciy a range of string
BENCHMARK(stringBench)->DenseRange(0,32);
BENCHMARK_MAIN();
