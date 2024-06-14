#include <iostream>

using namespace std;

/*

    Keep printing multiples of 3 and stop as soon as you hit a 
    multiple of 36.
    
    The user will provide a start value - call it 'num'
    
    Start printing from a multiple of 3 after 'num' (inclusive)

*/

int main()
{
    cout << "Enter a number:" << endl;
    
    int num;
    cin >> num;
    
    // Same as loop_control.cpp but with a break statement instead of
    // using a flag variable
    
    while(true) {
        // First check if the current number is a multiple of 3
        if ((num % 3) == 0) {
            
            // Check if the number is a multiple of 36
            if ((num % 36) == 0){
                
                break;
                // exit the loop
                // Note we now don't need tokeeptrack of a flag variable
            } 
            
            cout << num << endl;
        }
        
        num++;
    
    }
    
    /*
    
    Notice how we're deciding when to end the loop on the fly
    based on a condition which keeps on changing
    
    Exercise: implement this using a for loop
    
    */
    
    return 0;
}