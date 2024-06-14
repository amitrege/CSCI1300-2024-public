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
    
    // Create a boolean to decide when to stop the loop 
    bool flag = true;
    
    while(flag) {
        // First check if the current number is a multiple of 3
        if ((num % 3) == 0) {
            
            // Check if the number is a multiple of 36
            if ((num % 36) == 0){
                flag = false;
                //now that flag is set to false
                // the next time the loop condition is checked 
                // it will be false
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