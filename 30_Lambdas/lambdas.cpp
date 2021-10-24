#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// simple struct for buildings
// 一个关于 建筑的 struct
struct building{
    string name;
    int height;

    building(string s, int h){
        name = s;
        height = h;
    }
};

int main(){
    /*
     * 
     * why Lambds ?
     *
     * concise(简明的; 简练的; 简洁的; 简略的; 简缩的) way of defining
     * function object passed to STL algorithm
     *
     * can create  a  function  with naming it.
     * 
     */

    // Minimal lambda that take no parameters, and just prints something
    // 有些像 JS 中的立即执行函数
    [] {
        cout << "Hello lambda !" << endl;
    }();
    cout << endl;

    // we can also  assign lambda to a variable 
    auto print_lambda = []{
        cout << " assign lambda to a variable " << endl;
    };
    // call it like a function
    print_lambda();
    cout <<endl;


    // we can pass parameters to lambdas 
    const string some_string("some constant string");

    // pass the string to a lambda that return a double
    auto parameter_lambda = [] (const string &s) -> double  {
        cout << s << endl;
        return 123.456;
    };

    // call it like a function with parameter and return value
    double some_num = parameter_lambda(some_string);

    // print out the returned number
    cout << some_num << endl;
    cout << endl;

    // you can use captures to access variables of outer scope not passed as an
    // argument
    int a = 5;
    int b = 10;

    // Print out or captured variables
    cout << "a = " << a << ", b = " << b <<endl;
    cout << endl;

    // "a" is read-only, "b" is passed by reference, b can be changed
    // 这里的  [a, &b ] a 不带 &, 只读，不可改变， &b 带 &， 可以更改值
    // [ = ] 的意思是所有值 都只读
    auto capture_lambda = [=, &b] {
//    auto capture_lambda = [a, &b] {
        // Valid because not read-only
        b++;
        // a ++ won't work, because just a is read-only, you can change it if 
        // you use &a
        // " = " means that I want capture  everything else, every variables as
        // read-only;
        // [ = ]  this will be read-only
    };

    // call the lambda
    capture_lambda();

    // print out or capture variables
    cout << "a = " << a << ", b = " << b <<endl;
    cout << endl;


/*----------------------------- example --------------------------------------*/ 
// sorting things


    vector<building> buildings{
        building("bank",234),
        building("Monument",542),
        building("Skycraper",808),
        building("Libray",145),
        building("Office",200),
    };

    // print out unsorted list of objects
    // 未排序
    cout <<  "-========== Pre-sort =========-" << endl;

    for (const auto &s : buildings){
        cout << "Building name :" << s.name << " Building height:   "
            << s.height << endl;
    }
    cout << endl;


    // create  a  sort rule
    // 创建 分类规则
    // auto 最后要加 ；
    auto sort_rule = [] (const building &b1, const building &b2) -> bool{
        return b1.height < b2.height;
    };

    // call std::sort on our custom object 
    sort(buildings.begin(),buildings.end(),sort_rule);

    // Print  out the list post-sort 
    // 排序后
    cout <<  "-========== Post-sort=========-" << endl;

    for (const auto &s : buildings){
        cout << "Building name :" << s.name << " Building height:   "
            << s.height << endl;
    }
    cout << endl;

    return 0;

}

