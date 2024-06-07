#include<iostream>

using namespace std;

int main(void) {
    // cin - example with types other than int
    
    float x = 0;

    cout << "Please enter a number" << endl;
    
    cin >> x;
    
    cout << "User input is : " << x << endl;
    
    string s;
    
    cout << "Please enter a string" << endl;
    
    cin >> s;
    
    cout << "User string is " << s << endl;
    

	return 0;
}