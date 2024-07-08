#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    double var;
    string month;
    string line;

    // 1. create file stream objects/variables
    // ifstream means input file stream - used for reading from files
    ifstream fin;
    
    

    // 2. Associate the file stream object with the file
    //    by using .open(), with the file name (as a string) in parentheses
    fin.open("sales2.txt"); // Open input file
    
    
    
    
    // process header - first line of text that doesn't contain the data we need (see first line in sales2.txt)
    
    
    // 3. Check if file opened successfully
    if (fin.fail()) // or (!fin.open())
    {
        cout << "File couldn't be opened!" << endl;
        return -1; 
        // return because I don't want my program to continue if file wasn't opened successfully
        
        // -1 to indicate the program didn't execute successfully
    }
    
    
    // ignore the first line - take input and do nothing with it
    getline(fin, month);
    // Similar to getline(cin, line)

    
    

    // 4. Read lines from file 
    // eof() returns true if we have completed reading 
    // all the data in the file - end of file

    // as long as there is data to read from file, loop will execute
    while(!fin.eof()) {
        fin >> month >> var;
        cout << month << setw(10) << var << endl;
    }
    
    // Notice above that we are taking input from a file (use 'fin')
    // and producing output on the screen (use 'cout')
    

    
    // 5. close files
    fin.close();
     
    return 0;
}