#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num = 0;
    cout << "Please enter a positive number: " << endl;
    cin >> num;

    // This while loop is only entered if user enters
    // a number smaller than 0
    
    while (num < 0) // validating user input
    {
        cout << "Invalid input"<< endl << "Please enter a POSITIVE number:";
        cin >> num;
    }
    
    // Notice how inside the loop we have a cin statement
    
    // So if the user enters a negative number the first time
    // he program will enter the loop and keep asking the 
    // user for input till the loop condition becomes false 
    // That is, till the number entered is non-negative

    cout << "Square root of " << num << " is " << sqrt(num) << endl;
    
    return 0;
}