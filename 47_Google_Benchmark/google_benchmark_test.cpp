/**
 *
 * Compile Command:
 *
 *  g++ google_benchmark_test.cpp -std=c++11 -isystem benchmark/include  -Lbenchmark/build/src -lbenchmark -lpthread -o google_benchmark_test
 *  
 *  make sure you run all the installation command in the google benchmark repo 
 *  and install the library globally .
 *
 *  You can find the install command at :
 *  <a href="https://github.com/google/benchmark#installation">Installation<a/>
 *
 */ 

#include <benchmark/benchmark.h>

static void BM_StringCreation(benchmark::State& state) {
  for (auto _ : state)
    std::string empty_string;
}
// Register the function as a benchmark
BENCHMARK(BM_StringCreation);

// Define another benchmark
static void BM_StringCopy(benchmark::State& state) {
  std::string x = "hello";
  for (auto _ : state)
    std::string copy(x);
}
BENCHMARK(BM_StringCopy);

BENCHMARK_MAIN();

