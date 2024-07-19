#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

const int COLUMN = 2187; // 3^8


// Same as cantor example
void paint_empty(char arr[][COLUMN], int start_x, int start_y, int size) {
    for (int i = start_x; i < start_x + size; i++) {
        for(int j = start_y; j < start_y + size; j++) {
            arr[i][j] = 0;
        }
    }
}


// Print a square of order = 1, how many pixels required? See below
// ***
// *_*
// ***

// Need a 3x3 array

// For order = 2, need 8 such squares with an empty square in between

// *********
// *_**_**_*
// *********
// ***___***
// *_*___*_*
// ***___***
// *********
// *_**_**_*
// *********

// Thus, a 9 x9 square 

// In general need, 3^order x 3^order pixels

// const int COLUMN = 2187; (3^8)



// same as cantor example 
void display_arr(char arr[][COLUMN], int order, ostream* out) {
    for(int i = 0; i< pow(3, order); i++) {
        for(int j = 0; j < pow(3, order); j++) {
            *out << ((int)arr[i][j])*255  << " ";
        }
        *out << endl;
    }
}



// Inside the recursion, we need a base case
// The base case is basically, when we have to print a order 1 square
// ***
// *_*
// ***

// Second, the recursion is basically calling the function 8 times
// with the right indices and (order-1)

// Since wwe're not printing things line by line like in cantor,
// we don't need an extra for-loop

void sierpinski(char arr[][COLUMN], int start_x, int start_y, int order) {
    
    // BASE CASE - print small square of order 1
    if (order == 1) {
        arr[start_x][start_y] = 1;
        arr[start_x][start_y+1] = 1;
        arr[start_x][start_y+2] = 1;

        arr[start_x+1][start_y] = 1;
        arr[start_x+1][start_y+1] = 0;
        arr[start_x+1][start_y+2] = 1;

        arr[start_x+2][start_y] = 1;
        arr[start_x+2][start_y+1] = 1;
        arr[start_x+2][start_y+2] = 1;

        return;
    }

    // TODO - set the right indices
    sierpinski(arr, );
    sierpinski(arr, );
    sierpinski(arr, );

    sierpinski(arr, );
    paint_empty(arr, );
    sierpinski(arr, );

    sierpinski(arr, );
    sierpinski(arr, );
    sierpinski(arr, );
}




// Almost exactly the same as the cantor example
// Just need to adjust the size of the array 
// Since it is a square, both height and width are the same

int main() {
    // 7TH ORDER max
    char arr[COLUMN][COLUMN];

    int order;
    cout << "Enter order of the carpet: " << endl;
    cin >> order;

    sierpinski(arr, 0, 0, order);

    ofstream fout;
    fout.open("sierpinski.pgm");

    // Output PGM file header
    fout << "P2" << endl;
    fout << pow(3, order) << " " << pow(3, order) << endl;
    fout << 255 << endl; // Max pixel intensity

    display_arr(arr, order, &fout);
}