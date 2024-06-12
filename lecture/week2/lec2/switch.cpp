#include <iostream>
using namespace std;

int main()
{

    char a;

    cout << "Enter some character" << endl;
    cin >> a;

    switch(a){
        case 'a':
            cout << "Entered option 1"<< endl;
            break;
        case 'b':
            cout << "Entered option 2"<< endl;
            break;
        case 'c':
            cout << "Entered option 3"<< endl;
            break;
        case 'd':
            cout << "Entered option 4"<< endl;
            break;
        default:  // a catch-all statement (kind of like an else)
            cout << "Invalid option entered"<< endl;
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
    
    
    /*
    
    Note that switch statements can only match 'char' or 'int' type
    variables
    
    DO NOT do something like this:
    
    double x = 3.14;
    
    switch(x) {
        case 3.14 : cout << "is pi" << endl;
                    break;
        
        case 6.28 : cout << "is two pi" << endl;
                    break;
    }
    
    */

    return 0;
}

