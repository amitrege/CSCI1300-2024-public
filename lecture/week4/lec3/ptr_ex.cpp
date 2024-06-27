#include <iostream> 
using namespace std;

int main() {
    
    // Pointer Intuition:
    // Information is stored in your computer in "slots" of memory
    
    // For instance, when we write 'char x = 'a''
    // The computer allocates a slot in memory to store 'a' in a place
    // called 'x'
    
    // The name of the variable 'x' is for our convenience
    // The computer undestands only numbers so it names this memory
    // slot with a number called the address 
    
    // Contents of memory -> |__|__|__|__|__|__|__|__|_a|__|__|
    // Names              -> |__|__|__|__|__|__|__|__|_x|__|__|
    // Addresses          -> |51|52|53|54|55|56|57|58|59|60|61|
    
    // The address the variable 'x' is stored at is 59
    
    // This address is also called a pointer
    
    // Each type has a corresponding pointer type
    // Pointer variables are declared via the * notation
    // Example: char* p = &x
    // Where &x gives us the address of the variable x
    
    int a = 5; 
    int b = 10;

    double d = 3.2;

    int* ptr1 = &a;   // ptr1 points to 'a' (has address of 'a')
    int* ptr2 = &b;   // ptr2 points to 'b' (has address of 'b')

    double* ptr3 = &d; // ptr3 points to 'd' (has address of 'd')

    int** ptr4 = &ptr1; // ptr4 points to 'ptr1' (has address of 'ptr1)'

    // Use Dereference operator to get value at an address
    cout << "ptr1 points to: " << *ptr1 <<  endl;
    cout << "ptr3 points to: " << *ptr3 <<  endl;
    cout << endl;
    
    



    (*ptr1)++; // Since ptr1 points to 'a' - *(ptr++)
                // We are indirectly updating 'a'
                // *ptr1 = *ptr1 + 1
    // a = a + 1, a++
    
    

    *ptr3 = *ptr3 - 2; // Indirectly updating 'd'
    
    

    // Use Dereference operator to get value at an address
    cout << "ptr1 points to: " << *ptr1 <<  endl;
    cout << "ptr3 points to: " << *ptr3 <<  endl;
    cout << endl;


    

    // We can use the dereference operator twice on a pointer
    // to a pointer
    // We know ptr4 can be used to access 'a'
    cout << "ptr4 - Double dereference: " << **ptr4 << endl;
    cout << endl;




    **ptr4 = **ptr4 + 2;

    cout << "Value of a is " << a << endl;
    cout << endl;


    

    // Note a variable of type int* can only point to an int
    // Similarly, a double* variable can only point to a double
    // So doing the following would be an error 
    // double* e = &a;

    return 0;
}