#include <iostream>

using namespace std;

int main() {

    int a = 10;
    // The above statement creates space for the variable 'a' in memory and 
    // initializes it with 10
    // |__|__|__|__|__|__|__|__|10|__|__|
    // |__|__|__|__|__|__|__|__|_a|__|__|



    // Since the computer only understands numbers (1's and 0's),
    // referring to the variable 'a' doesn't work. 
    // (the name is a convenience for us humans)

    
    // Therefore, we label each 'spot' in the memory using numbers 
    // called the 'address'

    
    // Contents of memory -> |__|__|__|__|__|__|__|__|10|__|__|
    // Names              -> |__|__|__|__|__|__|__|__|_a|__|__|
    // Addresses          -> |51|52|53|54|55|56|57|58|59|60|61|

    
    // A pointer is the address of a variable. 
    
    // In the example above, the "pointer to variable a" is 59 and the 
    // VALUE at pointer address 59 is 10

    
    
    // Pointers have a type which depends on the variable they point to
    // For ex: a pointer to a 'char' is of type 'char*' 

    // The address may change for each run of the program. 
    
    // So you cannot rely on the address being the same like you can 
    // for the value always being the same
    
    // In the example above, if you run your program again, 'a' might be
    // stored at pointer address 65 this time but the value at that 
    // address remains the same obviously (i.e. 10)
    
    
    
    // How to create a pointer?
    // Given a variable 'a':
    // &a is the address of a
    int* ptr = &a;

    
    cout << "The value of the pointer is: " << ptr << endl;

    
    
    // Now that we know how we can get the address of a given variable,
    // lets go in the reverse direction
    // i.e. given an address, find the value at that address

    cout << "The value at the address pointed to by ptr is : " << *ptr << endl;
    // The above operation (getting the value at an address) is 
    // called dereferencing 


    
    

    // Question : 
    // How are pointers different from references?
    
    // Beyond superficial differences in syntax, they seem to do the exact same thing
    // Indeed, references are implemented internally by using a pointer

    // We will not be covering references in this course 
    // (atleast there is no plan right now)



    
    
    
    
    //   How deep can we go with pointers?
    //   Can we have a pointer to a pointer or pointer to a pointer to a
    //   pointer .......?

    //    This is possible because the address to the variable 
    //    also has to be stored somewhere in memory. 
    
    //    Therefore, the address of where the address is stored 
    //    is a pointer to a pointer.
    
    //    We can go as many layers deep as we want

    // For example: int a; int* b = &a; -> b is the address for a 
    // int** c = &b -> c is the address of b
    
    // How do we get the value of 'a' now?
    // there are 2 ways:
    
    // *b  // get the address of 'a' and then dereference
    
    // **c // b = *c; a = **c 
    // get the address of 'b', then dereference twice


    // Therefore, c is the pointer to the pointer of a 

}