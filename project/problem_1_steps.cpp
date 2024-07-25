#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

/*
int main () {
    int width = 10;
    int height = 10;

    for (int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {

            int x = j - (width/2);
            int y = i - (height/2);

            cout << "(" << setw(2) << x << ", " << setw(2) << y << ")" << " ";
        }
        cout << endl;
    }
}
*/

/*
// Black square 
int main() {
    int width = 100;
    int height = 100;

    ofstream fout;
    fout.open("image.pgm");

    // Output PGM file header
    fout << "P2" << endl;
    fout << width << " " << height << endl;
    fout << 255 << endl; // Max pixel intensity

    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            int x = j - (height/2);
            int y = i - (width/2);

            // Black
            fout << 0 << " ";
        }
        fout << endl;
    }
}
*/

/*
// White square 
int main() {
    int width = 100;
    int height = 100;

    int side_length = 50;

    ofstream fout;
    fout.open("image.pgm");

    // Output PGM file header
    fout << "P2" << endl;
    fout << width << " " << height << endl;
    fout << 255 << endl; // Max pixel intensity

    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            int x = j - (width/2);
            int y = i - (height/2);

            if ((x > (-side_length)/2) && (x < (side_length)/2) && (y > (-side_length)/2) && (y < (side_length)/2)) {
                // Inside Square : White
                fout << 255 << " ";
            }
            else {
                // Outside Square : Black
                fout << 0 << " ";
            }
        }
        fout << endl;
    }
}
*/


/*
// White Circle
int main() {
    int width = 100;
    int height = 100;

    int r = 30;

    ofstream fout;
    fout.open("image.pgm");

    // Output PGM file header
    fout << "P2" << endl;
    fout << width << " " << height << endl;
    fout << 255 << endl; // Max pixel intensity

    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            int x = j - (height/2);
            int y = i - (width/2);

            if (x*x + y*y < r*r) {
                fout << 255 << " ";
            }
            else {
                fout << 0 << " ";
            }
        }
        fout << endl;
    }
}
*/


// Green square on Blue background 
int main() {
    int width = 100;
    int height = 100;

    int side_length = 50;

    ofstream fout;
    fout.open("image.ppm");

    // Output PPM file header
    fout << "P3" << endl;
    fout << width << " " << height << endl;
    fout << 255 << endl; // Max pixel intensity

    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            int x = j - (width/2);
            int y = i - (height/2);

            if ((x > (-side_length)/2) && (x < (side_length)/2) && (y > (-side_length)/2) && (y < (side_length)/2)) {
                // Inside Square : Green
                // RGB Values
                fout << 0 << " " << 255 << " " << 0 << " ";
            }
            else {
                // Outside Square : Blue
                // RGB Values
                fout << 0 << " " << 0 << " " << 255 << " ";
            }
        }
        fout << endl;
    }
}


/*
// Yellow circle on red
int main() {
    int width = 100;
    int height = 100;

    int r = 30;

    ofstream fout;
    fout.open("image.ppm");

    // Output PPM file header
    fout << "P3" << endl;
    fout << width << " " << height << endl;
    fout << 255 << endl; // Max pixel intensity

    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            int x = j - (height/2);
            int y = i - (width/2);

            if (x*x + y*y < r*r) {
                // Yellow
                fout << 255 << " " << 255 << " " << 0 << " ";
            }
            else {
                // Red
                fout << 255 << " " << 0 << " " << 0 << " ";
            }
        }
        fout << endl;
    }
}
*/

/*
// Japanese Flag
int main() {
    int width = 600;
    int height = 400;

    int r = 120;

    ofstream fout;
    fout.open("image.ppm");

    // Output PPM file header
    fout << "P3" << endl;
    fout << width << " " << height << endl;
    fout << 255 << endl; // Max pixel intensity

    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            //double x = (j - (width/2.0))/ (width/2.0);
            //double y = (i - (height/2.0))/ (height/2.0) ;

            int x = (j - (width/2));
            int y = (i - (height/2));

            if (x*x + y*y < r*r) {
                // Japan Red
                fout << 188 << " " << 0 << " " << 45 << " ";
            }
            else {
                // Red
                fout << 255 << " " << 255 << " " << 255 << " ";
            }
        }
        fout << endl;
    }
}
*/
