#include <iostream>
#include <string>

using namespace std;

int main() {
    
    // What if you want to print special characters like single or
    // double quotes to the screen?
    
    //cout << "This course is called "CSCI 1300" too." << endl;
    
    // Uncomment the above line and try to run this program and see what
    // you get
    

    // Without the back slashes, " would end the string literal   
    cout << "This course is called \'CSCI1300\" too." << endl;
    
    
    
    
    // The '\n'is a special character denoting a 'new line'
    // Whenever it is encountered in a string, the cursor moves 
    // to a new line on the screen
    
    cout << "Harry\nPotter" << endl; 
    
    return 0;
}