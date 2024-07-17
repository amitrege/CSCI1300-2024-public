#include<iostream>

using namespace std;

// Same as inherit1.cpp with a simple workaround for the error

class Point{
    int x; 
    
    public:
    int get_x() {
        return x;
    }
};

class Point2D: Point {
    int y;
    
    public:
    void set_y_to_x() {
        y = Point::get_x();  // The 'Point::' part tells the compiler 
                            // that this functions is from the base clas
    }
};

int main() {
    Point2D a;
    a.set_y_to_x();
    
    // Essentially, now, we have way to get the value of x from the base
    // class and then set the value of y
}