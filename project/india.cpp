#include <iostream>
#include<fstream>

using namespace std;

int main() {

    int w = 450;
    int h = 300;

    int r = 45;

    //double aspect = 1.5;

    ofstream fout;
    fout.open("india.ppm");

    // Output PPM file header
    fout << "P3" << endl;
    fout << w << " " << h << endl;
    fout << 255 << endl; // Max pixel intensity


    for (int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {

            int x = (j - w/2);
            int y = (i - h/2);

            if(x*x + y*y < r*r) {
                // Navy Blue Circle
                fout << 0 << " " << 0 << " " << 128 << " ";
            }
            else {
                if (i < (h/3)) {
                    // Saffron
                    fout << 255 << " " << 153 << " " << 51 << " ";
                }
                else if (i >= (h/3) && i < (2*h/3)) {
                    // White
                    fout << 255 << " " << 255 << " " << 255 << " ";
                }
                else{
                    // Green
                    fout << 19 << " " << 136 << " " << 8 << " ";
                }
            }
        }
        fout <<  endl;
    }

    fout.close();

    return 0;
}