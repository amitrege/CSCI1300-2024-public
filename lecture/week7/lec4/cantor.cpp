#include<iostream>
#include<fstream>

using namespace std;

void display(char a[][WIDTH], int height, int order, ostream* out) {
    for(int i = 0; i < (height * (order + 1)); i++) {
        for(int j = 0; j < WIDTH; j++) {
            cout << ((int)a[i][j]) << " ";
        }
        cout << endl;
    }
}


void paint_empty(char a[][WIDTH], int start_y, int height, int start_x, int size, int order) {
    for(int i = start_y; i < start_y + height; i++){
        for (int j = start_x; j < start_x + size; j++){
            a[i][j] = '0';
        }
    }
}


void cantor(char a[][WIDTH], int start_y, int height, int start_x, int size, int order) {
    
    if(order == 0) {
        // Set a solid line between certain limits
        for(int i = start_y; i < start_y + height; i++){
            for (int j = start_x; j < start_x + size; j++) {
                a[i][j] = '1';
            }
        }

        return;
    }

    cantor(a, start_y + height, height, start_x, (size/3), order - 1);
    paint_empty(a, start_y + height, height, start_x + (size/3), (size/3), order - 1);
    cantor(a, start_y + height, height, start_x + (2*(size/3)), (size/3), order - 1);

    for(int i = start_y; i < start_y + height; i++){
        for (int j = start_x; j < start_x + size; j++) {
            a[i][j] = '1';
        }
    }
}


int main() {
    int height = 100;

    char arr[100 * 20][WIDTH] = {0};

    int order = 6;


    ofstream fout;
    fout.open("cantor.pgm");

    // Output PGM file header
    fout << "P2" << endl;
    fout << WIDTH << " " << height*(order+1) << endl;
    fout << 255 << endl; // Max pixel intensity

    cantor(arr, 0, height, 0, WIDTH, order);

    display(arr, height, order, &fout);

} 