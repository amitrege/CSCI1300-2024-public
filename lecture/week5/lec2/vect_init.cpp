#include <iostream>
#include <vector>

using namespace std;

int main() {

    // You need to "create space" in an empty vector
    
    // Arrays have "space" in memory already, you just need to initialize 
    // values
    
    int a[10]; // Creates space for 10 ints in memory
    
    cout << a[5] << endl; // Even if the value is not initialized
                        // it can be printed out 
                        // You will get a random, garbage value
    
    

    vector<int> b(10);  // Again creates space for 10 ints
    cout << b[5] << endl;

    vector<int> c; // Just empty
                    // We can add space on the fly
    
    //cout << c[5] << endl; // ERROR: nothing inside the vector right now


    // int d[];   // ERROR: an array HAS to have some size
    

    cout << a[21] << endl;

}