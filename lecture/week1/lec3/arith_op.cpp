#include<iostream>

using namespace std;

int main(void) {
    int x = 3;
    int y = 10;

    cout << x+y << endl;

    int z = x+y;

    cout << z << endl;

    cout << "x*y is " <<  x*y << endl;

    cout << "x/y is " << x/y << endl; // Both are integer variables
    // so the answer will be 0 as that is the closest integer

    cout << "y/x is " << y/x << endl; // Same logic as above

    // Remainder is 1
    cout << "y%x is " << y%x << endl; // 10 = 3*3 + 1

    // Remainder is 3
    cout << "x%y is " << x%y << endl; // 3% 10. -> 3 = 0*10 + 3

    // What happens when we mix a types? What will be type of the answer?
    // You convert the answer to the type which is more "general
    // (atleast usually)
    
    // all integers can be represneted by doubles but not the other way
    double m = 3;
    double result = m/y;
    cout << "m/y is " << result << endl;

}