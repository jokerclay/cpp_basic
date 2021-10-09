// This header file includes the classes relating to two different 
// vector classes;
// By: clay liu

/*============================================================================* 
*                                                                             *
*           创建类，说明类中有哪些数据，这个类中有那些函数                    *
*           还说明了有这些 数据/函数 的属性 是 公有的/私有的                  *
*                                                                             *
*============================================================================*/



/*============================================================================* 
*                                                                             *
*  point类中有两个私有的，double 类型的 数据成员。两个返回值为空的公有的函数  *
*  创建后的 类，就是 自定义类，创建之后，后面的类也能用这个类                 *
*                                                                             *
*============================================================================*/

// a point class that contains a single coordinates pair
class point{
    private:
        double x;
        double y;
    public:
        void update(double new_x,double new_y);
        void print();
};

/*============================================================================* 
*                                                                             *
*  vector类中有两个 point 类型的类,一个叫start,一个叫 end 的私有数据成员*
*                                                                             *
*============================================================================*/
// a vactor class that has coordinates as point objects
class vector{
    private:
        point start;
        point end;
    public:
        // 构造函数 名字 与 类的名字 相同
        // 有多个构造函数时，应该 “签名”(signature) 不同
        vector();
        vector(double x1, double y1, double x2,double y2);
        void update(double x1, double y1, double x2,double y2);
        void print();
};



