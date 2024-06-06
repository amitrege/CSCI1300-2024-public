#include<iostream>

using namespace std;

int main(void) {
    // cout variation - break string into multiple phrases
    
    cout << "Hello" << "1300" << endl;
    
    cout << "Hello" << " " << "1300" << endl;
    
    // Notice how using the double quotes around the numbers makes all the difference in the output 
    cout << "Hello" << 6*7 << endl;
    
    cout << "Hello " << "6*7" << "1300" << endl;

	return 0;
}