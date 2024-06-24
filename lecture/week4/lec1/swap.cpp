#include <iostream>

using namespace std;


// Notice in this example we have to change the value of 2 variables inside a fucntion
// and have them reflected outside the function

// Since we can't return 2 values in c++, we use pointers

// Obviously you can return one value and use a pointer for the other as well
// like 'func3' in global.cpps
// If you do this, make sure to change the return type of the function from void to int

void swap(int *a, int *b) {
    // Create a temporary variable to store the value of 'a'
    int temp = *a;

    // Put the value of 'b' into 'a' 
    *a = *b;

    // Use the temporary variable to put the old value of 'a' into 'b'
    *b = temp;
}

/*

WRONG WAY 

void swap(int a, int b) {
    // Create a temporary variable to store the value of 'a'
    int temp = a;

    // Put the value of 'b' into 'a' 
    a = b;

    // Use the temporary variable to put the old value of 'a' into 'b'
    b = temp;
}

*/

int main() {
    int a = 10;
    int b = 5;

    cout << "The value of \'a\' before the swap is " << a << endl;
    cout << "The value of \'b\' before the swap is " << b << endl;
    cout << endl;

    swap(&a, &b);

    cout << "The value of \'a\' after the swap is " << a << endl;
    cout << "The value of \'b\' after the swap is " << b << endl;

    return 0;
}