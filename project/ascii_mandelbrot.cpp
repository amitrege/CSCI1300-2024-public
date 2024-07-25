#include  <iostream>
#include <complex>

using namespace std;

int main() {
    int w = 50;
    int h = 50;

    float r = 0.9;

    float aspect = 1;

    complex<float> center(0.0, 0.0);

    complex<double> c(w, h);

    float radius = 3.0;
    float escape_radius = 2.0;

    int max_iter = 256;

    for (int i = 0; i < h; i++) {
        for(int j = 0; j< w; j++){
            float y = (i - h/2.0) / (h/2.0);
            float x = (j - w/2.0) / (w/2.0)*aspect; 

            complex<float> c = center + radius*complex<float>(x, y);

            complex<float> z(0.0, 0.0);

            for(int k = 0; k < max_iter; k++) {
                z = z*z + c;
            }
            if (norm(z) <= escape_radius) {
                cout << "x";
            }
            else {
                cout << "-";
            }
        }
        cout << endl;    
    }
    return 0;
}