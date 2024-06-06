#include <iostream>

// Removed the line "using namespace ....."

// This line tells the compiler that we are in a space where operations
// from 'std' will be used. So, there is no need o add "std::" in front // of the printing functions

// Makes the code shorter if we are using only a single namespace

int main(void) {
    
    // Notice how we now need to add a prefix to the printing operators
    std::cout << "Hello 1300" << std::endl;
    
    // If you remove these prefixes the code won't work (try it out!)

    return 0;
}