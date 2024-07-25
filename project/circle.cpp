/*

    Draw a circle with 'x' in a grid of -

*/

#include <iostream>
#include<fstream>

using namespace std;

int main() {
    int w = 300;
    int h = 200;

    double r = 0.3;

    double aspect = 0.66666;

    ofstream fout;
    fout.open("circle.ppm");

    // Output PGM file header
    fout << "P3" << endl;
    fout << w << " " << h << endl;
    fout << 255 << endl; // Max pixel intensity


    for (int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {

            double x = (j - w/2.0)/(w/2.0);
            double y = (i - h/2.0)/(h/2.0) * aspect;

            if(x*x + y*y < r*r) {
                fout << 188 << " " << 0 << " " << 45 << " ";
            }
            else {
                fout << 255 << " " << 255 << " " << 255 << " ";
            }
        }
        fout <<  endl;
    }

    fout.close();

    return 0;
}