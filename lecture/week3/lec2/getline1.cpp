#include <iostream>
#include <string>

using namespace std;

int main() {

    string first_name, last_name;
    string name;

    // Takes the entire line in and stores it in the variable name
    getline(cin, name);
    cout << "Input received is " << name << endl;

    // If we did the following
    // cin >> name
    
    // And the user entered the name as "Harry Potter"
    // Only "Harry" will get stored in the variable name
    // "Potter" will be ignored 
    
    // In general, cin takes stores chracters only till the next 
    // whitespace (empty space or new lines) in a variable
    
    // If you want to use 'cin', you need two variables like so: 
    // cin >> first_name >> last_name;
    
    
    
    
    
    // But a problem remains
    // What if we don't know how many words a user is going to enter?
    // Ths is where getline() becomes useful
    
    // You first take input from the user using getline() and then split 
    // it into words using string functions we've learned

    return 0;
}