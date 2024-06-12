#include <iostream>

using namespace std;

int main()
{
    // What will happen after you run this program?
    
    // Answer given below; try to answer yourself (you can always run 
    // the code to check if your answer is correct) 
    
    double balance = 10000;
    
    int year = 0;
    
    while (balance < 20000) {
        year++;
        
        balance += 10;  // equivalently balance = balance + 10
    }
    
    cout << year << endl;
    
    
    
    
    
    
    
    
    // Loop condition becomes false when balance == 20000
    // That is, after 1000 iterations (so value of year is 1000)
    
    // Prints out 1000
    
    
    
    
}