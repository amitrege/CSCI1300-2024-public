#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

const int COLUMN = 2187;

void paint_empty(char arr[][COLUMN], int rows, int start_x, int start_y, int size) {
    for (int i = start_x; i < start_x + size; i++) {
        for(int j = start_y; j < start_y + size; j++) {
            arr[i][j] = 0;
        }
    }
} 

void sierpinski(char arr[][COLUMN], int rows, int start_x, int start_y, int order) {
    if (order == 1) {
        arr[start_x][start_y] = 1;
        arr[start_x][start_y+1] = 1;
        arr[start_x][start_y+2] = 1;

        arr[start_x+1][start_y] = 1;
        arr[start_x+1][start_y+1] = 0;
        arr[start_x+1][start_y+2] = 1;

        arr[start_x+2][start_y] = 1;
        arr[start_x+2][start_y+1] = 1;
        arr[start_x+2][start_y+2] = 1;

        return;
    }

    sierpinski(arr, rows, start_x, start_y, order - 1);
    sierpinski(arr, rows, start_x , start_y + pow(3, order - 1) , order - 1);
    sierpinski(arr, rows, start_x , start_y + 2 * pow(3, order - 1) , order - 1);

    sierpinski(arr, rows, start_x + pow(3, order - 1), start_y, order - 1);
    paint_empty(arr, rows, start_x + pow(3, order - 1), start_y + pow(3, order - 1), pow(3, order - 1));
    sierpinski(arr, rows, start_x + pow(3, order - 1), start_y + 2 * pow(3, order - 1), order - 1);

    sierpinski(arr, rows, start_x + 2 * pow(3, order - 1), start_y, order - 1);
    sierpinski(arr, rows, start_x + 2 * pow(3, order - 1), start_y + pow(3, order - 1), order - 1);
    sierpinski(arr, rows, start_x + 2 * pow(3, order - 1), start_y + 2 * pow(3, order - 1), order - 1);
}

void display_arr(char arr[][COLUMN], int order, ostream* out) {
    for(int i = 0; i< pow(3, order); i++) {
        for(int j = 0; j < pow(3, order); j++) {
            *out << ((int)arr[i][j])*255  << " ";
        }
        *out << endl;
    }
}

int main() {
    // 7TH ORDER max
    char arr[COLUMN][COLUMN];

    int order;
    cout << "Enter order of the carpet: " << endl;
    cin >> order;

    sierpinski(arr, pow(3, order), 0, 0, order);

    ofstream fout;
    fout.open("sierpinski.pgm");

    // Output PGM file header
    fout << "P2" << endl;
    fout << pow(3, order) << " " << pow(3, order) << endl;
    fout << 255 << endl; // Max pixel intensity

    display_arr(arr, order, &fout);
}