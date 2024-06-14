#include <iostream>

using namespace std;

// Print remainders for number from 0 to num w.r.t 5

int main()
{
    int num = 0;
    cout << "Enter a number: ";
    
    cin >> num; 
    
    // The only difference from the previous few examples is that the 
    // loop variable 'i' is now initialized to 0 instead of 1
    
    // So the loop will run for one iteration extra compared to 
    // the previous few examples
    
    for (int i = 0; i <= num; i++) // Start from 0, < num 
    {
        cout << "The remainder of "<< i << " when divided by 5 is "<< i % 5 << endl;
    }
    
    return 0;
}