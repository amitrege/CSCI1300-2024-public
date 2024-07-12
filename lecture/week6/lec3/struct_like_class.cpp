#include  <iostream>
#include <string>

using namespace std;


class Point1 {
    int x;
    int y;

    int get_x() {
        return x;
    }
}; // Note the semicolon is still there like a struct

struct Point2 {
    int x;
    int y;

    int get_x() {
        return x;
    }
};


// NOTE: THIS CODE WILL NOT COMPILE
int main() {
    Point1 a;

    // All data and member functions are 'private' by default
    // By 'private' I mean that their attributes and member functions
    // cannot be accessed via the dot notation
    // More on this later
    
    // For structures, all data and functions are public by default
    
    // The following statements would work for a struct
     
    a.x = 5;
    
    cout << a.x << endl; // also illegal

    cout << a.get_x() << endl;
    
    
    // Whereas the following is legal
    
    // If you want the code to compile, comment out all the code in main 
    // above this line
    Point2 b;
    
    b.x = 3;
    
    cout << b.get_x() << endl;
    // Since structs have attributes and member functions 
    // 'public'(accessible) by default, we can safely write the above
    
}



