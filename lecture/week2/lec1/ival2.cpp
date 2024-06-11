#include <iostream>
using namespace std;

int main()
{

    int age1, age2;

    cout << "Enter the ages of the two users:" << endl;

    cin >> age1 >> age2;

    // Another approach to solving the same problem as ival1.cpp
    
    // Here, we have moved the input checking to the else part
    // of the conditional statement
    
    if (age1 >= 0 && age2 >= 0) {
        // The program logic will only get here 
        // if BOTH age1 and age2 are positive 
        
        // Notice how we've used the AND operator instead of the OR op
        cout << "Valid input" << endl;
    }
    else {
        cout << "Invalid input. Both ages must be greater than 0" << endl;
    }

    /*
    
    Note:
    1. We only enter the else part if atleast one of age 1 or age2
       are smaller than 0.
    

    */

    return 0;
}