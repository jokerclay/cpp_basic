// Return a vector of random number within a range

#include <cstdlib>
#include <vector>

std::vector<int> rng(int begin, int end, int count){
    std::vector<int> v;
    for(int i = 0; i < count ; i++ ){
        v.push_back((std::rand()%end) + begin);
    }
    return v;
}
