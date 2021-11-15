// This benchmark is a besic example of how to use Google benchmark for studying
// the memory hierarchy(等级制度,层次结构)
// compile command:
//  g++ cache.cpp --std=c++11 -lbenchmark -lpthread -O3 -o cache


#include <benchmark/benchmark.h>
#include <vector>
#include <limits>
#include "rng.h"


static void cacheBench(benchmark::State &s){
    // get the size from the input
    int bytes = 1 << s.range(0);

    // Share the size between data and indices(指数)
    int count = (bytes / sizeof(int)/2);

    std::vector<int> v;

    for(auto i : rng(std::numeric_limits<int>::min(),
                std::numeric_limits<int>::max(),
                count)){
        v.push_back(i);
    }

    // Initialize this vector with random indices(指数)
    std::vector<int> indices;
    for(auto i :rng(0,count,count)){
        indices.push_back(i);
    }

    // Now let randomly access the values using the indices
    while(s.KeepRunning()){

        long sum = 0;
        for(int i : indices){
            sum += v[i];
        }
        benchmark::DoNotOptimize(sum);
    }

    // we can set the number of bytes we have processed
    s.SetBytesProcessed(   long(s.iterations()  ) * long(bytes)  );

    // Insert a custom label 
    s.SetLabel(std::to_string(bytes / 1024 ) + "kb");

}

// Register the benchmark
// DenseRange allows us to generate a set of input
// ReportAggregatesOnly allow us to limit out output
BENCHMARK(cacheBench)-> DenseRange(13,26) -> ReportAggregatesOnly(true);


// This basicly the main function
BENCHMARK_MAIN();

