#include <iostream>
#include <iomanip> // Need this

using namespace std;

int main() {
    
    int quantity = 10;
    
    double price = 19.95;
    
    cout << "Quantity:" << setw(4) << quantity << endl;
    
    cout << "Price:" << fixed << setw(8) << setprecision(2) << price << endl;
    
    cout << "Price:" << fixed << setprecision(2) << price << endl;
    
    cout << fixed << setprecision(3) << price << endl;
    
    cout<< fixed << setprecision(1) << price << endl;
    

    return 0;
}