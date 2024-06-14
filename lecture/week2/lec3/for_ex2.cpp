#include <iostream>

using namespace std;

// Same task as for_ex1.cpp
// That is print numbers from 1 to a user entered amount

int main()
{
    int num = 0;
    cout << "Enter a number: ";
    
    cin >> num; 
    
    // Notice the loop condtion now and compare with for_ex1.cpp 
    for (int i = 1; i < (num + 1); i++)
    {
        cout << i << endl;
    }
    
    /*
    
    
    
    

    Instead of condition being 'i <= num' it is now 'i < (num + 1)'
    
    A for-loop stops when this condtion becomes false
    
    If you think about it, both these condtions become false at the same
    time.
    
    For ex: if num = 5, we have condtions: 'i <= 5' and 'i < 6'
    
    Both the above condtions become false when 'i' equals 6
    
    So both this program and for_ex1.cpp print the exact same thing
    */
    
    return 0;
}