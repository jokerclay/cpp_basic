//  This file contains the interface for an integer array class
//  By: clay liu 

class IntegerArray{
    public:
        int *data;
        int size;

        IntegerArray(int size){
            data = new int[size];

            // 'this ' refers to the object wre in 
            // Allows  us to differentiate betweeen parameters and fields

            this -> size = size;
        }

        // a destructor for integer array
        ~IntegerArray(){
            delete[] data;
        }


        // a necessary copy constructor fir this to work intuitively 
        // Performs what is known as deep copy
        // Default copy constructor does a shallow copy (just fields)

        IntegerArray(IntegerArray &o){
            data = new int[o.size];
            size = o.size;
            for (int i = 0; i < size; i++){
                data[i] = o.data[i];
            }
        }
};
