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
    }
    
    cout << year << endl;
    
    
    
    
    
    
    
    
    // Once the program enters the while loop it will never exit the loop
    // Because the value of balance is never updated in the loop
    // so the loop condition never becomes false
    
    // Thus, the program never even gets to the line of cout and 
    // nothing is printed to the screen
    
    
    
    
}