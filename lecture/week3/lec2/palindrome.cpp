#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    cin >> s;

    // reverse a string
    // Functions avaliable to do this but we will do it without using any 
    // help

    
    // Approach 1
    cout << "Approach 1"<< endl;
    /*
    Reverse string and check if original is equal to reverse
    */
    
    // Start with an empty string and keep adding characters one by one
    // in reverse
    
    string reverse = "";
    
    for (int i = s.length() - 1; i >= 0; i--) {
        reverse = reverse + s[i];
    }
    
    cout << "Reversing string...... "<< reverse << endl;
    cout <<"------------------------------------------------" << endl;

    if (reverse == s){
        cout << s << " is a Palindrome"<< endl;
    }
    else{
        cout << s << " is not a Palindrome"<< endl;
    }
    cout <<"------------------------------------------------" << endl;

    
    
    
    
    
    
    
    // Approach 2
    cout << "\n\nApproach 2"<< endl;
    
    /*
    Start traversing the string from both the start and the front
    
    If you see that any of the characters along the way do not match,
    then string is not a palindrome
    */
    
    // Create variables - one to keep track how far along you are from 
    // the start
    
    // The other to keep track how far along you are from the back
    int i = 0;
    int j = s.length() - 1;
    
    // Loop will stop when the two variables cross each other
    while(i < j){
        if (s[i] != s[j]) {
            break;
        }
        i++;
        j--;
    }

    cout << "i: " << i << ", j: " << j << endl;

    // If the two variables DID cross each other, that means all 
    // characters along the way were the same
    if (i >= j) {
        cout << s << " is a Palindrome"<< endl;
    }
    else{
        cout << s << " is not a Palindrome"<< endl;
    }
    

    return 0;
}