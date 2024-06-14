#include <iostream>

using namespace std;

//Compute the factorial function 
    // N! = N * (N-1) * (N-2) * ........ * 2 * 1
    // 5! = 5*4*3*2*1

int main()
{
    int num;
    cout << "Enter a number: ";
    
    cin >> num; 
    
    // Create a variable to keep track of intermediate values
    int factorial = 0;
    
    /*
     The code does not produce the right answer, why?
     
     Run the program and see what answer is produced 
     
     Answer given below; try on your own before looking
    */
    
    for (int i = 1; i <= num; i++){// start at 1, <=
        factorial = factorial * i; 
    }
    
    cout << factorial << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*
    
    Notice the 'factorial' variable has been initialized to 0
    instead of 1
    
    If you multiply anything with 0, it will always remain 0
    
    So even though the loop is iterating through the right sequence of
    numbers in the loop, the final answer is wrong because of an
    incorrect initial value
    */
    
    return 0;
}