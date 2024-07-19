#include<iostream>
#include<fstream>

using namespace std;

// Use a power of 3 as width to avoid rounding issues, order 8 max
const int WIDTH = 2187;  // 3^8




// We first start with writing a function which helps with debugging

// We will store the colors of each pixel inside an array

// So, we want to write a function which prints out the array to the 
// image file (using fout)

// To easily check if we're printing out the correct thing, we also
// want to print to the screen (using cout)

// So we create a function which takes in an array, and its size,
// along with a parameter which tells where to output pixel values
// i.e. a stream object (passed via pointer)

// In the cantor example, the depth (height) of the image will vary 
    // according to how large the order is
    // Large 'order' will mean a longer image
    
    // So it is impoosible to know image size (array size) beforehand
    // Hence, we use a size for the array which is larger than we need
    
    
    
    // Now the question is: Given the 'order' of the cantor set,
    // How to calculate the size of the image (array indices to fill)?
    
    
    // Let's start small
    // When order = 1, we need atleast three pixels. Why? See below
    
    // Cantor of order 1   ======>    *_*
    // Think of '*' as color black
    // Think of '_' as color white
    
    // For order = 1, we need enough pixels to be able to remove 
    // at least one pixel from the center.
    
    // If you used 2 pixels, you cannot remove a pixel from the center
    
    
    
    
    
    
    // When order = 2, we want ===>   ***___***
    //                                *_*___*_*
    
    // Convince yourself that we need atleast 9 pixels on the start line
    
    // Additionally, we also need two lines to print 
    
    // Thus, array size is now 2x9 (2 rows, 9 columns)
    
    
    
    
    
    
    
    // When order = 3, we want =====>   *********_________*********
    //                                  ***___***_________***___***
    //                                  *_*___*_*_________*_*___*_*
    
    // Thus, the array size needed is 3x27
    
    // Therefore, in general for order = n, we need a n x (3^n) array
    
    
    
    
    // In the recitation question, we make sure each "line" above itself
    // has a height of 100 pixels
    // This is to make it visible to the naked eye
    
    // Let us take height = 3, so each "line" above is 3 pixels thick
    // *********_________*********
    // *********_________*********
    // *********_________*********
    // ***___***_________***___***
    // ***___***_________***___***
    // ***___***_________***___***
    // *_*___*_*_________*_*___*_*
    // *_*___*_*_________*_*___*_*
    // *_*___*_*_________*_*___*_*
    
    // Notice that the width remained the same - it is 3^order
    // But the height is now - order x (height of each line)
    
    // In the above case, order = 3 and height = 3
    // So we have, (3x3) x (3^3) ====> 9 x 27 pixel values
    
    
    
    
    
    // Finally, the question says that there is a solid line at the top
    // from which noting is removed, like so
    
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
    
    // This is just to make it look like a cantor set
    
    // Thus, for order = 3, we need to print (order + 1) lines (4 lines)
    // Each of height 3  ==> (4x3) x (3^3) = 12 x 27 values
    
    
    // Therefore, the general formula to caluclate the size of the array
    // is ((order + 1) x height of each line) x (3^order)
    
    // So let's say we need to print an image with order = 8 and height
    // per line = 100 pixels, we need atleast an array of size 
    // (9 x 100) x (3^8) ===> 900 x 2187
    
    // We just create an array of a slightly larger size to make sure 
    // everything works out

    // Now we will finally write a function which prints out pixel
    // values












// The function itself is pretty easy
// Just set the limits of the 2 for loops to be the ones we calculated

// For 2D arrays, we have to pass in the column size with the array
void display(char a[][WIDTH], int height, int order, ostream* out) {
    
    for(int i = 0; i < ((order + 1)*height); i++) {
        for(int j = 0; j < WIDTH; j++) {
            // First convert a[i][j] to an int and then multiply
            *out << ((int) a[i][j]) * 255  << " ";
        }
        *out << endl;
    }
}



// Notice that we have kept the width to be constant (not 3^order)
// This is to make sure images with small order don't become too small

// For instance, if order = 3, the image will only be 3 pixels wide
// Pretty hard to see






// Finally, we use an array of chars, this is because pixel values are 
// between 0 and 255, so we don't need the extra range of the type 'int'






int main() {
    int height = 100;

    // Create a 2D array and set all values to 0
    char arr[100 * 20][WIDTH] = {0};
    // Array is larger than needed

    
    
    // Set everything to 1 initially so that we get a all white image
    for(int i = 0; i < 100 * 20; i++) {
      for(int j = 0; j < WIDTH; j++) {
        arr[i][j] = 1;
      }
    }
    // The idea is that we will set specific parts of the image to be 
    // black (i.e. pixel value 0)
    
    
    
    
    
    // Set the order
    int order = 3;


    // Create a file to print to
    ofstream fout;
    fout.open("cantor.pgm");

    // Output PGM file header
    fout << "P2" << endl;
    fout << WIDTH << " " << height*(order+1) << endl; // Set size of img
    fout << 255 << endl; // Max pixel intensity
    
    
    // print to file (pass pointer to fout)
    display(arr, height, order, &fout);
    
    
    
    // print to screen (pass pointer to cout)
    display(arr, height, order, &cout);
} 