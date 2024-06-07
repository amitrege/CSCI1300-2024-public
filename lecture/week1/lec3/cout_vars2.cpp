#include <iostream>

using namespace std;

/*
    Example of cout statements with variables

*/

int main() {
    string name = "Amit";
    
    char char_1 = 'A';
    char char_2 = 'a';
    string char_3 = "A";
    string char_4 = "a";
        
    cout << char_1 << endl;
    
    cout << char_2 << endl;
    
    cout << char_3 << endl;
    
    cout << char_4 << endl;
    
    /*
    Note that even though the above variables look the same when they are 
    printed out, NONE of them are equal to each other
    
    char_1 and char_2 are different because they are different characters
    char_1 and char_3 are different because they have different types
    and so on....
    */
    
    return 0;
}