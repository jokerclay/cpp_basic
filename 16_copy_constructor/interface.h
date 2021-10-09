// This header file includes a vector class with copy constructor
// By clay liu

// A vector class that has all coordiantes(坐标)
class vector{
    public:
        double start_x;
        double start_y;
        double end_x;
        double end_y;


        // Constructors 构造函数
        vector();
        vector(double x1, double y1, double x2, double y2);

        // Copy constuctor (has original objcet by reference)
        vector(vector &v);

        // prototype for print function
        void print();
};

