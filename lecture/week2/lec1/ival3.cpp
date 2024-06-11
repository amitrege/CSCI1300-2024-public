#include <iostream>
using namespace std;

int main()
{

    int age1, age2;

    cout << "Enter the ages of the two users:" << endl;

    cin >> age1 >> age2;

    // Yet another approach to solving the same problem as ival1.cpp
    
    // Here we check whether ages are valid individually in the else part
    
    // The if part remains the same as ival2.cpp
    if (age1 >= 0 && age2 >= 0) {
    
        cout << "Valid input" << endl;
    }
    else {
        
        // Instead of just printing "invalid input"
        // We now are more precise about what went wrong
        // Print which one of the inputs was invalid
        
        // Question for you: What if both inputs were invalid? What is printed?
        
        // Answer given at the end of the file; try to answer on your own
        
        if (age1 < 0) {
            cout << "Age1 cannot be less than 0" << endl;
        }

        if (age2 < 0){
            cout << "Age2 cannot be less than 0" << endl;
        }
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*
        There is no else between the two ifsfor age 1 and age2
       So, they are not mutually exclusive conditions. It is 
       possible both of those if statements are entered.

    */

    return 0;
}