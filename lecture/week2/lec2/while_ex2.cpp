#include <iostream>

using namespace std;

int main()
{
    // Example: buy supplies from a store
    
    // We've seen examples of menus in the homework andd previous 
    // classes on if statements
    
    // But what if you want a menu which allows you to choose options
    // again?
    
    char option;
    
    cout << "What category of supplies would you like to browse today?"  << endl;
    
    cout << "a: Fishing" << endl;
    cout << "b: Skiing" << endl; 
    cout << "c: Biking" << endl;
    cout << "q: Quit" << endl;
    
    cin >> option;

    // Demorgan's law:
    //  (NOT a) AND (NOT b) = NOT (a OR B) and vice versa
    
    // In C++:
    // !a && !b = !(a || b)
    // !(a && b) = !a || !b 
    

    // Loop through the menu continuously
    // Loop keeps going until the user enters 'q' or 'Q' 
    while(option != 'q' && option != 'Q')
    // equivalent to -> !(option == 'q' || option == 'Q')
    {
        if (option == 'a' || option == 'A')
        {
            cout << "You chose fish" << endl;
        }
        else if(option == 'b' || option =='B')
        {
            cout << "You chose skii" << endl;
        }
        else if (option == 'c' || option =='C')
        {
            cout << "You chose bike" << endl;
        }
        else 
        {
            cout << "Invalid input. Choose one the options displayed below!" << endl;
        }
        
        cout << "What category of supplies would you like to browse today?"  << endl;
        cout << "a: Fishing" << endl;
        cout << "b: Skiing" << endl; 
        cout << "c: Biking" << endl;
        cout << "q: Quit" << endl;
        cin >> option;
        
    }
    

    return 0;
}