#include <iostream>

using namespace std;

// Skip printing the number 5 using continue

int main()
{
    // continue - skips the current iteration of the loop
    // Goes to the start of next iteration

    // Note: for a for loop, this means that 
    // the loop counter (usually 'i') WILL BE updated

    cout << "continue statement demo" << endl;
    for (int i = 1; i < 11; i++) // off by 1; ,< num + 1 // 1
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << endl;
        // update
    }
    

    return 0;
}