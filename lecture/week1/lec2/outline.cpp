// Comments are written using // at the start of a line 

/*
    Comments spanning multiple 
    lines can be written this way
*/






// Include stuff (functions) written by other people 
#include<iostream>












// Convenience - allows us to not have to write std:: before every cout or cin
using namespace std;














// The operating system calls the main function and starts executing statements line by line

/* 
    What the heck is a function?
    (Very!) Loosely speaking, it is a section of a program that executes a certain task

    Why do we want functions?
    Functions allow us to reuse the code we have already written.
    For example, virtually every program prints out something. 
    
    Without functions, we would have to implement printing in each and
    every program. 
    
    Instead, we use "#include <iostream>" and use
    cout whenever we want to print.
*/

int main() {
    
    
    
    
    
    
    
    
    
    

    
    
    // This is where you write your code

    // Notice how we've written int before main()
    // The word before the name of a function denotes its return type
    // Each function is allowed to return a value
    // For the main function, returning 0 to the OS means that the 
    // program exited normally

    cout << "Hello " << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // The return statement allows you to exit the function
    // The number 0 tells the operating system that everything was ok
    return 0;     
}