#include <iostream>

using namespace std;



int main()
{
    int num = 0;
    cout << "Enter a number: ";
    
    cin >> num; 
    
    // print numbers from 1 to num 
    
    // Since the variable is defined and intialized inside the loop
    // statement, it is sometimes also called the 'loop variable'
    
    for (int i = 1; i <= num; i++)
    {
        cout << i << endl;
    }
    
    // The loop variable only exists inside the loop
    
    // Trying to access it outside the loop is an error
    
    // i = 5; // Uncommenting this line will give you a ERROR!
    
    /*
    
    Note, since 'i' is no longer 'alive' outside the loop, we are free
    to redefine a variable of the same name.
    
    */
    
    int i = 5; // This is legal
    
    // The compiler does not know of any variable called 'i' after the 
    // loop ends
    cout << i << endl;
    
    return 0;
}