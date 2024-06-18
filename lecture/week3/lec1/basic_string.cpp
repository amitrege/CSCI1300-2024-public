#include <iostream>
#include <string>

using namespace std;

int main() {

    char c;

    // All characters are implemented internally as integers
    // so we can convert a char to an int
    
    // When we print this number out, we get that chars ASCII 
    // representation
    c = 'A';
    cout << c << endl;
    cout << static_cast<int>(c) << endl;

    cout << endl;
    
    
    
    
    
    
    
    // Since characters are just ints internally, we can asssign them
    // an int as well
    
    // When a char variable is printed out, the number stored in it is
    // interpreted using the ASCII encoding
    
    // Notice how 'A' was encoded as 65 above, so 67 is 'C' (moving 2
    // charcters ahead)
    c = 67;
    cout << c << endl;
    
    //cout << static_cast<int>(c) << endl;  // Use this if you actually
    //want to print out the number 67 instead of 'C'

    
    
    
    
    // We can go in the othher direction as well - convert int to char
    int i = 68;
    cout << static_cast<char>(i) << endl;
    
    // What will be the charcter printed out? -> Try for yourself

    cout << endl; 
    
    
    

    c = 'B';
    cout << c << endl;
    cout << static_cast<int>(c) << endl;

    cout << endl;
    
    

    c = 'Z';
    cout << c << endl;
    cout << static_cast<int>(c) << endl;

    cout << endl;
    
    
    
    // Note how the integer representation of 'a' is differnt from 'A'
    c = 'a';
    cout << c << endl;
    cout << static_cast<int>(c) << endl;

    cout << endl;
    
    
    
    
    // Move one number ahead from 'a'
    c = 'b';
    cout << c << endl;
    cout << static_cast<int>(c) << endl;

    cout << endl;
    
    
    
    
    // Move 26 numbers ahead from 'a'
    c = 'z';
    cout << c << endl;
    cout << static_cast<int>(c) << endl;

    cout << endl;

    
    
    // The digit character '1' is different from 1
    // Note the single quotes
    // encoded using 49
    c = '1';
    cout << c << endl;
    cout << static_cast<int>(c) << endl;

    cout << endl;
    
    
    // Move one number ahead
    c = '2';
    cout << c << endl;
    cout << static_cast<int>(c) << endl;

    cout << endl;

    
    
    /*
    Note, we cannot do the following 
    
    c = '10';
    cout << c << endl;
    cout << static_cast<int>(c) << endl;

    '10' is not a character but actually two characters ('1' and '0')
    If you want to use a sequence of characters, use strings   
    
    */

    
    
    
    cout << endl;

    /*
    String literals and character literals are NOT the same!!!
    
    We cannot do: char c = "a"; // Compilation Error 
    
    You need: string c = "a" // "a" and 'a' are not the same
    
    */

    
    
    string s = "a";

    /*
    Cannot convert a string to int using a static cast:
    cout << static_cast<int>(s) << endl;   // Compiler error

    There are specific functions in C++ to allow us to convert
    strings to int, doubles etc
    */

    return 0;
}