#include  <iostream>
#include <complex>
#include <fstream>

using namespace std;

float cabs2(complex<float> z) {
    return (real(z) * real(z) + imag(z) * imag(z));
}

int main() {

    int w = 450;
    int h = 450;

    float r = 0.9;

    float aspect = 1;

    complex<float> center(0.0, 0.0);

    complex<double> c(w, h);

    float radius = 2.0;
    float escape_radius = 2.0;

    int max_iter = 256;

    ofstream fout;
    fout.open("mandelbrot.pgm");

    // Output PGM file header
    fout << "P2" << endl;
    fout << w << " " << h << endl;
    fout << 255 << endl; // Max pixel intensity

    for (int i = 0; i < h; i++) {
        for(int j = 0; j< w; j++){
            float y = (i - h/2.0) / (h/2.0);
            float x = (j - w/2.0) / (w/2.0)*aspect; 

            complex<float> c = center + radius*complex<float>(x, -y);

            complex<float> z(0.0, 0.0);

            int final_iter = 0;
            for(int k = 0; k < max_iter; k++) {
                z = z*z + c;

                if (cabs2(z) > escape_radius * escape_radius) {
                    final_iter = k+1;
                    break;
                }
            }
            fout << final_iter << " " ;
            /*
            if (cabs2(z) <= escape_radius * escape_radius) {
                fout << 0 << " ";
            }
            else {
                fout << 255 << " ";
            }
            */
        }
        fout << endl;
    }

    fout.close();

    return 0;
}