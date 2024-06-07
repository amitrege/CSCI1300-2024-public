#include<iostream>

using namespace std;

int main(void) {
    // cin - example 
    
    // First create variables and then take input from the user to put 
    // information into it.

    
    int x = 0;
    int y = 0;

    cout << "Please enter two numbers:" << endl;
    
    // User can enter these numbers on different lines or on the same
    // line seprated by a space 
    // cin object ignores any whitespace - so a newline and blank space
    // looks the same to it
    cin >> x >> y;
    cout << "User input is : " << x << " and " << y << endl;
    

	return 0;
}