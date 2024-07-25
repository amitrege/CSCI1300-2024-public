#include  <iostream>
#include <complex>
#include <fstream>

using namespace std;

double cabs2(complex<double> z) {
    return (real(z) * real(z) + imag(z) * imag(z));
}

void hsv2rgb(double h, double s, double v, double* r, double* g, double* b) {
    
}

int main() {

    int w = 450;
    int h = 450;

    // Default - (0,0) r = 2
    // ( -1.3, 0)   r = 0.2  
    // (-1.4, 0) r = 0.01
    complex<double> center(-1.4, 0.0);

    complex<double> c(w, h);

    double radius = 0.01;
    double escape_radius = 2.0;

    int max_iter = 256;

    ofstream fout;
    fout.open("mandelbrot.ppm");

    // Output PGM file header
    fout << "P3" << endl;
    fout << w << " " << h << endl;
    fout << 255 << endl; // Max pixel intensity

    for (int i = 0; i < h; i++) {
        for(int j = 0; j< w; j++){
            double y = (i - h/2.0) / (h/2.0);
            double x = (j - w/2.0) / (w/2.0); 

            complex<double> c = center + radius*complex<double>(x, -y);

            complex<double> z(0.0, 0.0);

            int final_iter = 0;
            for(int k = 0; k < max_iter; k++) {
                z = z*z + c;

                if (cabs2(z) > escape_radius * escape_radius) {
                    final_iter = k+1;
                    break;
                }
            }
            fout << final_iter*8 << " " ;
            fout << final_iter << " " ;
            fout << final_iter/8 << " " ;
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