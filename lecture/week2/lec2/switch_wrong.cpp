#include <iostream>
using namespace std;

int main()
{

    char a;

    cout << "Enter some character" << endl;
    cin >> a;
    
    // Notice how a 'break' statement is missing in case 'a'
    
    // Run the code to see how the program flow goes to case 'b'
    // even if the user enters 'a'

    switch(a){
        case 'a':
            cout << "Entered option 1"<< endl;
        case 'b':
            cout << "Entered option 2"<< endl;
            break;
        case 'c':
            cout << "Entered option 3"<< endl;
            break;
        case 'd':
            cout << "Entered option 4"<< endl;
            break;
    }
    
    /*
    Removing any of the 'break' statements causes control to move to the
    next option. 
    
    DO NOT forget to add breaks if you want your 
    options to be mutually exclusive.
    
    Go ahead and remove one of the break statements and see what happens
    when you run the code
    
    
    You CAN have multiple statements within a case statement
    For example:
    case 'a': {
        int x = 5;
        x++;
        cout << x << endl;
        break;
    }



    In fact, you can even have another switch case statement inside
    This would be similar to nested if-else statements 
    case 'a': {
        switch(b) {
            case 'z': .....
            .......... 
        }
    }

    */

    return 0;
}