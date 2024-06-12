#include <iostream>
#include <string> // 
using namespace std;

int main()
{
    // Example: buy supplies from a store
    // Compare this with while_ex2.cpp
    
    char option;

    // loop through the menu continuously
    do
    {
        cout << "What category of supplies would you like to browse today?"  << endl;
        
        cout << "a: Fishing" << endl;
        cout << "b: Skiing" << endl; // converting 
        cout << "c: Biking" << endl;
        cout << "q: Quit" << endl;
        
        cin >> option;
        
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
        else if (option == 'q' || option =='Q')
        {
            cout << "Goodbye!!!" << endl;
        }
        else 
        {
            cout << "Invalid input. Choose one the options displayed below!" << endl;
        }
        
    }while(option != 'q' && option != 'Q');
    
    /*
    
    A do-while loop is useful while creating a menu because 
    we know with certainity that the menu needs to be displayed atleast
    once
    
    */
    

    return 0;
}