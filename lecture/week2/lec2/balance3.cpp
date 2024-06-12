#include <iostream>

using namespace std;

int main()
{
    // What will happen after you run this program?
    
    // Answer given below; try to answer yourself (you can always run 
    // the code to check if your answer is correct) 
    
    double balance = 10000;
    
    int year = 0;
    
    const double RATE = 5; // Assume fixed rate of 5 percent
    
    while (balance < 20000) {
        year++;
        
        // Add interest every year (i.e. every iteration)
        balance = balance + (balance * (RATE/100));
    }
    
    cout << year << endl;
    
    
    // Intuitively, think of each iteration of the loop as modeling 
    // a year passing in this problem setting
    
    
    
    
    
    
    
    // Loop condition becomes false when balance > 20000
    // That is, after 15 iterations (so value of year is 15)
    // You can only know this number after running the progam
    
    // Prints out 15
    
    
    
    
}