#include<iostream>

using namespace std;

int main() {
    int num = 0;
    
    int input;
    
    // suppose we don't know how many inputs we want to take but we stop
    // taking inputs depending on what the number is
    
    // Stop taking input if the user enters 0
    while(cin >> input) {
        if (input == 0) {
            break;
        }
        cout << "I just received: " <<  input << endl;
    }
}