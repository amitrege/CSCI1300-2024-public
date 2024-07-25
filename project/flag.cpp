#include  <iostream>
#include <fstream>

using namespace std;

int main() {

    // 13 stripes in the flag
    int stripes = 13;
    int h_stripe;

    cout << "Enter height of each stripe in pixels (integer):" << endl;
    cin >> h_stripe;

    int h = stripes * h_stripe;  // Assume each stripe would be h_stripe pixels in height  
    int w = h * 1.9;  // Actaul flag proportions

    // Union dimensions (round to nearest int)
    int union_h = (7.0/13.0) * h;
    int union_w = 0.4 * w;

    ofstream fout;
    fout.open("flag.ppm");

    // Output PPM file header
    fout << "P3" << endl;
    fout << w << " " << h << endl;
    fout << 255 << endl; // Max pixel intensity

    // Output stripes
    for(int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {

            if (((i/h_stripe) < 7) && (j < union_w)) {
                // Print union
                // Old glory blue code
                fout << 10 << " " << 49 << " " << 97 << " ";
            }
            else {

                // Print stripes
                // Print out a red stripe first and then alternate with white stripes
                if(((i/h_stripe) % 2) == 0) {
                    // Old glory red code
                    fout << 179 << " " << 25 << " " << 66 << " ";
                }
                else {
                    // White
                    fout << 255 << " " << 255 << " " << 255 << " ";
                }
            } 
        }
        // For readability
        fout << endl;
    }
}