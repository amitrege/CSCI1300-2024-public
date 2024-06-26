#include <iostream>
#include <string>

using namespace std;

int main() {

    string first_name, last_name;
    string name;

    getline(cin, name);
    cout << "Input received is " << name << endl;

    cin >> first_name >> last_name;
    cout << "Input received is " << first_name << " " << last_name << endl;

    // Everything works fine in the above code
    
    // Try moving lines 11 and 12 (getline part) after the cin >> part
    
    // That is, flipping the order - use cin first and then use getline()
    // to take different input 
    
    
    
    
    
    
    
    
    
    
    // Explanation:
    /*
    The >> operator on cin ignores all whitespace (including newline \n)
    
    Thus, if cin is used first, you take two inputs into first_name and
    last_name, but a newline character is left behind
    
    Now, when getline() is called it sees a new line charcter as the
    first character and (because new line \n ends a line) its assumes
    it has reached the end of the line it's supposed to read.  
    
    */
    
    // Moral of the story: do not use mix cin and getline() in the same
    // program to avoid confusing bugs
    
    return 0;
}