#include <iostream>
using namespace std;

int main()
{

    int age;
    char initial;

    cout << "Enter age and initial" << endl;

    cin >> age >> initial;

    // There is no special reason to check age first and then initial
    
    // You can flip the if statements as well
    // i.e. check initials before age
    
    if (age == 10 || age == 19 || age == 23) {
        if (initial == 'a' || initial == 'w' || initial == 'z') {
            // Program logic reaches here if both age and initial match
            // with the selected ones
            cout << "You won!" << endl;
        }
        else {
            // Age matches but initial does not match
            cout << "You didn't win....." << endl;
        }
    }
    else {
        // Age does not match
        cout << "You didn't win....." << endl;
        
        // Notice how if the age didn't match, we didn't have to check if 
        // intial matched
    }


    return 0;

}