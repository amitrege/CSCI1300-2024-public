#include <iostream>

using namespace std;


// Keep printing till the number 5

int main()
{

    // break - terminates the loop
    
    for (int i = 1; i < 11; i++) // off by 1; ,< num + 1 // 1
    {
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
        // update
    }
    

    return 0;
}