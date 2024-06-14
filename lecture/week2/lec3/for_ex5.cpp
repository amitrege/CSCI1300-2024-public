#include <iostream>

using namespace std;



int main()
{
    int num = 0;
    cout << "Enter a number: ";
    
    cin >> num; 
    
    // print every other number from 2 -> num -- 2 4 6 8 10 12 14 ..
    
    // Approach 1
    // Essentially, we pick and print multiples of 2
    
    for(int i = 2; i <= num; i++) // Note start from 2 instead of 0
    {
        if( i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    
    // We have now combined a loop with a conditional
    
    // Basically we are performing a test in the loop body in every
    // iteration
    
    return 0;
}