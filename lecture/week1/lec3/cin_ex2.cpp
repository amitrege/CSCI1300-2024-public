#include<iostream>

using namespace std;

int main(void) {
    // Almost the same as cin_ex1.cpp but here we take input on the same
    // line as the string printed by cout
    
    // This is just a different way of formatting your program output
    
    // You can use either way to take input

    
    int x = 0;

    // Notice how the "endl" is missing from cin_ex1.cpp
    // So the cursor does not move to the next line
    cout << "Please enter a number: ";
    
    // This will wait for the user to enter a number and then press enter
    cin >> x;
    
    // Print out the number
    cout << "User input is : " << x << endl;
    

	return 0;
}