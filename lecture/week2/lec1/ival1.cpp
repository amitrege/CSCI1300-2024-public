#include <iostream>
using namespace std;

int main()
{
    // Input validation example
    // Check if both numbers entered are positive 
    
    int age1, age2;

    cout << "Enter the ages of the two users:" << endl;

    cin >> age1 >> age2;

    if (age1 < 0 || age2 < 0) {
        cout << "Invalid input. Both ages must be greater than 0" << endl;
    }
    else {
        cout << "Valid input" << endl;
    }

    return 0;
}