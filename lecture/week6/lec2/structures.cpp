#include <iostream>
#include <string>
using namespace std;

struct StreetAddress
{
    int houseNum;
    string streetName;
    int n;
    int m;
    double c;
};

// Just prints out whatever is inside the struct passed
void display(StreetAddress a)
{
    cout << "Printing out structure" << endl;
    cout << a.houseNum << endl;
    cout << a.streetName << endl;
    cout << a.n << endl;
    cout << a.m << endl;
    cout << a.c << endl;
    cout << endl;
}

int main() 
{
    StreetAddress theo;
    
    theo.houseNum = 1111;
    theo.streetName = "Engineering Drive";
    theo.n = 10;
    theo.m = 5;
    theo.c = 7;
    
    cout << theo.houseNum << " " << theo.streetName << endl;
    cout << endl;
    
    
    
    StreetAddress temp[6];
        
    // temp[0].houseNum = 15; // Can set fields individually
    
    for (int i=0; i< 6; i++)
    {
        temp[i].houseNum = 10;  // Or set fields in a loop
        display(temp[i]);
    }

    // cout << theo << endl;  // Cannot directly print a structure
                                // Just like we can't directly print
                                // arrays etc
    return 0;
}