// This header file includes the classes relating to two different 
// vector classes;
// By: clay liu

// a vector class that has all coordinates
class vector1{
    public:
        double start_x;
        double start_y;
        double end_x;
        double end_y;

        // Prototype for print funciton 
        void print();
};

// a point class that contains a single coordinates pair
class point{
    public:
        double x;
        double y;
};


// a vactor class that has coordinates as point objects
class vector2{
    public:
        point start;
        point end;
};

