#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

// Use a power of 3 as width to avoid rounding issues, order 8 max
const int WIDTH = 2187;  // 3^8

void display(char a[][WIDTH], int height, int order, ostream* out) {
    for(int i = 0; i < (height * (order + 1)); i++) {
        for(int j = 0; j < WIDTH; j++) {
            *out << ((int)a[i][j])*255  << " ";
        }
        *out << endl;
    }
}

// Everything till here is same as cantor1.cpp








// We need a function which creates the empty space inside a solid
// black line in the image (i.e that prints the space white)
// Thus it needs to print 1 to the file


// The main idea is that we pass the function start and end points 
// inside the array and then the function prints everything to be white















// For example, with order = 3, height = 3
// ***************************
// ***************************
// ***************************
// *********_________*********
// *********_________*********
// *********_________*********
// ***___***_________***___***
// ***___***_________***___***
// ***___***_________***___***
// *_*___*_*_________*_*___*_*
// *_*___*_*_________*_*___*_*
// *_*___*_*_________*_*___*_*

// Notice line 54 to line 56, we need to color a rectangle to be white

// What is the size of this rectangle? 9 pixels (current order)
// What is the height of this rectangle? 3 pixels (height of each line)

// Notice that as we go deeper in the figure,
// The height of this rectangle remains the same (height of each line)

// But the width is dependent on the CURRENT order we're printing

// Thus, on lines 42 to 44, width is 3 pixels (current order = 1) so 3^1














// In the below function, we don't actually use the above calculation 
// We're just given a start pixel (start_x, start_y) and height and 
// width (called size here)

// Given a start co ordinate, we can calculate the other end points
// (start_x, start_y) ------------------------ (start_x, start_y + size)
//         |                                               |
//         |                                               |
//         |                                               |
//         |                                               |
//         |                                               |
// (start_x + height, start_y) ------------(start_x+height, start_y+size)

// Paint everything inside this rectangle to be white (as 1)
void paint_empty(char a[][WIDTH], int start_y, int height, int start_x, int size, int order) {
    
    for(int i = start_y; i < start_y + height; i++){
        for (int j = start_x; j < start_x + size; j++){
            a[i][j] = 1;
        }
    }
    
}


// This is something similar to what was done on problem 1 on the project

// There is no main function here, but you can write if you want