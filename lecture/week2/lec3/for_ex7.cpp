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
    
    for (int i = 1; i <= num; i++){// start at 1, <=
        factorial = factorial * i; 
    }
    
    cout << factorial << endl;
    
    
    
    // I've used '<=' in the loop condition 
    
    // You can use '<' too 
    // Just make sure you are not off by one iteration
    
    // See code below
    /*
    for (int i = 1; i < (num + 1) ; i++){
        factorial = factorial * i; 
    }
    */
    
    return 0;
}