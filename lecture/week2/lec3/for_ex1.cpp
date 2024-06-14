#include <iostream>

using namespace std;



int main()
{
    int num = 0;
    cout << "Enter a number: ";
    
    cin >> num; 
    
    // print numbers from 1 to num 
    
    // Numbers are printed on separate lines because of endl obviously
    
    for (int i = 1; i <= num; i++)
    {
        cout << i << endl;
        // update
    }
    
    return 0;
}