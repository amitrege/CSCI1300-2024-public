#include<iostream>

using namespace std;

int main() {
    int num = 0;
    
    int input;
    
    // What if we don'tknow how many numbers are coming in?

    // A fairly hacky way of implementing this - but used widely
    
    // Basically the expression 'cin >> input' evaluates to false 
    // only when it gets something other than an integer
    
    // So when you stop entering numbers the loop exits
    
    
    while(cin >> input) {
        cout << "I just received: " << input << endl;
    }
}