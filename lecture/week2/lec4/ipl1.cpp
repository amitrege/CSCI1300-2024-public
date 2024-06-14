#include<iostream>

using namespace std;

int main() {
    // Suppose we want to take in 5 inputs from the user 
    int num = 0;
    
    int input;
    
    // cin >> i1 >> i2 ....
    
    // We can take five integers in by writing 'cin' five times
    // but it is cumbersome (think about a 1000 integers)

    while(num < 5) {  // Ofcourse, we can still do this with a for loop 
        
        cin >> input;
        
        cout << "I just received: " << input << endl;
        
        num = num + 1;
    }
    
    /*
    
    // Equivalently, we can use the break statement
    
    // Intuitively, a break statement stops and exits the loop
    // immidiately
    
    num = 0;
    
    while(1) {
    
        cin >> input;
        
        cout << "I just received: " << input << endl;
        
        num =  num + 1;

        if (num == 5) {
            // Exit the loop immidiately, regardless of what the loop
            // condition is
            
            break;
        }
    } 
    
    */
}