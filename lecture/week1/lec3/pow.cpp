#include<iostream>
#include<cmath>  // Need to includethis to use pow() function

using namespace std;

int main(void) {
    int x = 0;
    cin >> x;
    
    // essentially equals 2^(-x)
    cout << pow(2,-x) << endl; // 2^3. = 8
    
    int z = pow(2,-x);
        
    cout << z << endl;
    
	return 0;
}