#include <iostream>

using namespace std;

//Compute the factorial function 
    // N! = N * (N-1) * (N-2) * ........ * 2 * 1
    // 5! = 5*4*3*2*1

int main()
{
    int num = 0;
    cout << "Enter a number: ";
    
    cin >> num; 
    
    // Create a variable to keep track of intermediate values
    int factorial  = 1;
    
    // Note we will not get the right answer here
    
    // The loop condition is off by one
    
    // Should be obvious how to correct this by now
    
    for (int i = 1; i < num; i++){// start at 1, <
        factorial = factorial * i; 
    }
    
    cout << factorial << endl;
    
    return 0;
}