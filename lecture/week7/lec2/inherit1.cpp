#include<iostream>

using namespace std;

class Point{
    int x;    
};

class Point2D: Point {
    int y;
    
    public:
    void set_y_to_x() {
        y = x;  // This does not work because x is private in base 
    }
};

int main() {
    Point2D a;
    a.set_y_to_x(); // Will give an error
    
    // Problem is that since x is private in the base class, it cannot
    // be accessed even within the derived class
    
    
    
    // Obviously we can't do something like a.x or a.y either
}