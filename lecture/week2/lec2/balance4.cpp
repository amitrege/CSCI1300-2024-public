#include <iostream>

using namespace std;

int main()
{
    double balance = 10000;
    int year = 0;
    
    const double RATE = 5;
    
    while (balance < 20000) {
        year++;
        
        // completely legal to define a variable in a loop
        // It does not cause an error due to redefinition
        double interest = balance * RATE / 100;
        
        // Every iteration of the loop, a new 'interest' variable is created
        
        balance = balance + interest;
    }
    
    cout << year << endl;
    
    /*
    Note you CAN define the varible outside the loop and use it 
    inside the loop too
    
    But then that variable will need to be reset at the end of every
    loop iteration (if your logic demands it)
    
    */
    
    return 0;    
}