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

void paint_empty(char a[][WIDTH], int start_y, int height, int start_x, int size, int order) {
    for(int i = start_y; i < start_y + height; i++){
        for (int j = start_x; j < start_x + size; j++){
            a[i][j] = 1;
        }
    }
}

// Everything above is from cantor2.cpp


// Now we want to write the recursion itself 
// All the thinking required is done already

// First, when we write a recursive function, we need a base case (order = 0)
// the base case is just drawing a solid BLACK line between a start and end point

// We know how to do this:
// for(int i = start_y; i < start_y + height; i++){
//     for (int j = start_x; j < start_x + size; j++) {
//         a[i][j] = 0;   // Set to 0 for black
//     }
// }
// and then we return 










// Second, set up the recursion. 
// On every line, we need to decide what we have have to do on the NEXT line

// Divide the current line into three parts and recurse on the first and last third
// Paint the middle third empty












// Finally, we need to actually print something on the CURRENT line
// The above recursion only took care of the NEXT lines

// we need a solid black line between some limits on the current line

// This is easy (check the limits on the loops)
// for(int i = start_y; i < start_y + height; i++){
//     for (int j = start_x; j < start_x + size; j++) {
//         a[i][j] = 0;
//     }
// }

// start_x, start_y change according to which line on the figure you're on 



void cantor(char a[][WIDTH], int start_y, int height, int start_x, int size, int order) {

    if(order == 0) {
        // Set a solid line between certain limits
        for(int i = start_y; i < start_y + height; i++){
            for (int j = start_x; j < start_x + size; j++) {
                a[i][j] = 0;
            }
        }

        return;
    }

    // Order is reduced by 1 for the next line 
    cantor(a, start_y + height, height, start_x, (size/3), order - 1);
    
    paint_empty(a, start_y + height, height, start_x + (size/3), (size/3), order - 1);
    
    cantor(a, start_y + height, height, start_x + (2*(size/3)), (size/3), order - 1);
    
    
    
    // On the current line print everything black
    for(int i = start_y; i < start_y + height; i++){
        for (int j = start_x; j < start_x + size; j++) {
            a[i][j] = 0;
        }
    }


}



int main() {
    int height = 100;

    char arr[100 * 20][WIDTH] = {0};

    for(int i = 0; i < 100 * 20; i++) {
      for(int j = 0; j < WIDTH; j++) {
        arr[i][j] = 1;
      }
    }

    int order = 3;


    ofstream fout;
    fout.open("cantor.pgm");

    // Output PGM file header
    fout << "P2" << endl;
    fout << WIDTH << " " << height*(order+1) << endl;
    fout << 255 << endl; // Max pixel intensity

    cantor(arr, 0, height, 0, WIDTH, order);

    display(arr, height, order, &fout);

}