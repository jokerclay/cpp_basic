// This file contains the interface for a point class in  C ++
// By：clay liu

// use template simimlar to a function
// 使用 模板与 使用 函数相似
template<typename T>
class Point{
    private:
        T x;
        T y;
    public:
        Point(const T u, const T v) : x(u), y(v){}
        T getX(){return x;}
        T getY(){return y;}
};
