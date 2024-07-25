/*

    Draw a circle with 'x' in a grid of -

*/

#include <iostream>
#include<fstream>

using namespace std;

int main() {
    int w = 150;
    int h = 100;

    double r = 0.75;

    double aspect = 2;

    ofstream fout;
    fout.open("ascii_circle.txt");


    for (int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {

            // Multiplying by a >1 aspect ratio:
            // You are making "smaller" points, "larger" so: points which would earlier be inside are now outside , therefore, you squishing the size along that dimension
            double x = (j - w/2.0)/(w/2.0);
            double y = (i - h/2.0)/(h/2.0)* aspect;

            if(x*x + y*y < r*r) {
                fout << "x";
            }
            else {
                fout << "-";
            }
        }
        fout <<  endl;
    }

    fout.close();

    return 0;
}