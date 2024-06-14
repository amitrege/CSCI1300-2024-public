#include <iostream>

using namespace std;



int main()
{
    int num = 0;
    cout << "Enter a number: ";
    
    cin >> num; 
    
    // print every other number from 2 -> num -- 2 4 6 8 10 12 14 ..
    
    // Approach 2:
    // Update the loop variable by 2 instead of 1
    // that is, do 'i = i + 2' instead of 'i++' every iteration 
    
    for(int i = 2; i < num; i+=2) // i = i + 2;
    {
        // more efficient - because we now have fewer loop iterations
        
        cout << i << endl;
    }
    
    
    
    // Do you notice another change compared to 'for_ex5.cpp'?
    
    // Answer below; try on your own
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*
    
    The loop condition now is 'i < num' instead of 'i <= num'
    
    So if 'num' was given as a multiple of 2 the loop stops before 
    counting that iteration in this example.
    
    It will be counted in the previous example.
    
    Run the code with a multiple of 2 for this and the previous example
    and see the difference
    
    */
    
    return 0;
}