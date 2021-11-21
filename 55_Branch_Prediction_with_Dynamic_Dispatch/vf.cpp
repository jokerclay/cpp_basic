// This program shows the implications of run-time ploymorphism on the 
// peroformance due to branch prediction

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <random>
#include <benchmark/benchmark.h>

using namespace std;

struct Mammal {
    virtual float getSomeNumber() const noexcept{
        return 1.0;
    }
};

struct Dog :Mammal{
    float getSomeNumber() const noexcept{
        return 2.0;
    }
};


struct Cat :Mammal{
    float getSomeNumber() const noexcept{
        return 3.0;
    }
};

static void vf_sorted(benchmark::State &s){
    // create a vector to  store  mammals 
    vector<Mammal*> zoo;

    // Use fill_n to insert many instance in to the vector
    fill_n(back_inserter(zoo),10000,new Mammal);
    fill_n(back_inserter(zoo),10000,new Dog);
    fill_n(back_inserter(zoo),10000,new Cat);

    //  acculate a sum here 
    float sum = 0;

    // Profile here 
    while(s.KeepRunning()){
        // VF calls here are easy to predict because all instance of each type
        // are sequeential in the vector
        for(auto*  animal : zoo){
            sum += animal->getSomeNumber();
        }
    }
}

BENCHMARK(vf_sorted);


static void vf_unsorted(benchmark::State &s){
    // create a vector to  store  mammals 
    vector<Mammal*> zoo;

    // Use fill_n to insert many instance in to the vector
    fill_n(back_inserter(zoo),10000,new Mammal);
    fill_n(back_inserter(zoo),10000,new Dog);
    fill_n(back_inserter(zoo),10000,new Cat);


    // Now shuffle the vector 
    random_device rng;
    mt19937 urng(rng());
    shuffle(zoo.begin(),zoo.end(),urng);

    //  acculate a sum here 
    float sum = 0;

    // Profile here 
    while(s.KeepRunning()){
        // VF calls here are easy to predict because all instance of each type
        // are sequeential in the vector
        for(auto*  animal : zoo){
            sum += animal->getSomeNumber();
        }
    }
}

BENCHMARK(vf_unsorted);


BENCHMARK_MAIN();



