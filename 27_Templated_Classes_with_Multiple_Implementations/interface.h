// This file contains the interface for a templated class with specific
// implementations based on data types
// By: clay liu

template <typename T>
class Containers {
    private:
        T element;
    public:
        Containers(const T e) : element(e) {}
        // ++element do something first and increament
        // element++  increament then do something  
        T inc() {return ++element; }
};

template<>
class Containers <char> {
    private:
        char element;
    public:
        Containers(const char e) : element(e) {}
        char uppercase() {return toupper(element); }

};
