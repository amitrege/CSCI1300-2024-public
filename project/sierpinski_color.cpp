#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>

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

void display_arr(char arr[][COLUMN], int start_x, int start_y, int  curr_order, int order, ostream* out) {
    if(curr_order == order - 1) {
        int r = (double)std::rand() / RAND_MAX * 255;
        int g = (double)std::rand() / RAND_MAX * 255;
        int b = (double)std::rand() / RAND_MAX * 255;

        for(int i = 0; i< pow(3, order - 1); i++) {
            for(int j = 0; j < pow(3, order - 1); j++) {
                if (arr[i][j] == 0) {
                    // Print black in empty space
                    *out << ((int)arr[i][j])  << " " << ((int)arr[i][j])  << " " << ((int)arr[i][j])  << " ";
                }
                else {
                    *out << r  << " " << g  << " " << b  << " ";
                }
                
            }
            *out << endl;
        }

        return;
    }

    display_arr(arr, start_x, start_y, order - 1, order, out);
    display_arr(arr, start_x + pow(3, order - 1), start_y, order - 1, order, out);
    display_arr(arr, start_x + 2 * pow(3, order - 1), start_y, order - 1, order, out);

    display_arr(arr, start_x, start_y + + pow(3, order - 1), order - 1, order, out);
    display_arr(arr, start_x + pow(3, order - 1), start_y + pow(3, order - 1), order - 1, order, out);
    display_arr(arr, start_x + 2 * pow(3, order - 1), start_y + + pow(3, order - 1), order - 1, order, out);
}

int main() {
    std::srand(time(0));

    // 7TH ORDER max
    char arr[COLUMN][COLUMN];

    int order;
    cout << "Enter order of the carpet: " << endl;
    cin >> order;

    sierpinski(arr, pow(3, order), 0, 0, order);

    ofstream fout;
    fout.open("sierpinski.ppm");

    // Output PGM file header
    fout << "P3" << endl;
    fout << pow(3, order) << " " << pow(3, order) << endl;
    fout << 255 << endl; // Max pixel intensity

    display_arr(arr, 0, 0, order, order, &fout);
}