// This program shows off the max() in cpp

// max example
// Returns the largest of a and b. If both are equivalent, a is returned.
// 返回 a b 两个中的最大数，如果相等，返回 a 
//
#include <iostream>     // std::cout
#include <algorithm>    // std::max

int main () {

  std::cout << "max(1,2) == " << std::max(1,2) << '\n';

  std::cout << "max(3,1) == " << std::max(3,1) << '\n';

  // 同样适用于负数
  std::cout << "max(-3,-1) == " << std::max(-3,-1) << '\n';

  // 字母顺序的的，打印靠后的字母
  std::cout << "max('a','z') == " << std::max('a','z') << '\n';

  // 同样适用于浮点数
  std::cout << "max(3.14,2.73) == " << std::max(3.14,2.73) << '\n';

  // max() 函数相当于一下的函数模板
  template <class T> const T& max (const T& a, const T& b) {
      return (a<b)?b:a;     
      // or: 
      // return comp(a,b)?b:a; 
    }

  return 0;
}
