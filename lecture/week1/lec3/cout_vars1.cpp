#include <iostream>

using namespace std;

/*
    Example of cout statements with variables

*/

int main() {
    // We can define variables without an initial value
    int length;
    length = 10;
    
    
    
    // Can also create variables with an initial value at the time of 
    // definition
    float height = 15.51;
    
    double weight = 17.34;
    
    
    
    // Notice we can still store integer numbers inside a fractional type variable
    double volume = 13;
    
    
    
    // Notice how we've broken up the cout into two parts
    // The first part is a string and the second is a variable value
    cout << "The height is " << height << endl;
    
    
    
    // Can do the above for multiple variables as well
    cout << "The weight is " << weight << " and the volume is " << volume << endl; 
    
    
    
    // Main idea: Everything inside the double quotes is printed as is 
    // On the other hand VALUES of the variables are printed
    
    
    
    // A common mistake is shown below
    // This will print the word "height" and not its value
    cout << "The height is " << "height" << endl;
    
    return 0;
}