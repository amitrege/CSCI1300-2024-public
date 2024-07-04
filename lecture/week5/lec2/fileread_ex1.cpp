#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    double var;

    // 1. create file stream objects/variables
    // ifstream means input file stream - used for reading from files
    ifstream fin; 
    // Remember that fin is just a variable of type ifstream
    // So we can use name other than 'fin' for it as well


    
    
    // 2. Associate the file stream object with the file of interest
    //    by using .open(), with the file name (as a string) in parentheses
    fin.open("sales1.txt");// Open input file
    
    // The file above has to be in the same directory as the .cpp file
    // If not, then we need to give the full path to the file
    
    
    
    
    

    // 3. Check if file opened successfully
    if (fin.fail())
    {
        cout << "File couldn't be opened!" << endl;
        return -1; 
        // return because I don't want my program to continue if 
        // file wasn't opened successfully

        // -1 to indicate the program didn't execute successfully
    }
    
    
    
    


    // 4. Read first line from file 
    // eof - end of file
    while(!fin.eof()) // Can also use while(fin >> var)
    {
        fin >> var;

        // if you come across \n 
        cout << "Cursor location: " << fin.tellg() << endl;
        // tellg() returns the location of the fin cursor
        
        // Cursor positions start from 0 and note that there is an
        // invisible '\n' (newline) character at the end of every line
        // in 'sales1.txt'
        
        // Run this program and see to output to check exact cursor pos
        
        // I recommend you make changes to sales1.txt and see how 
        // the output changes
        
        cout << var << endl;
    }
    
    
    
    
    // 5. close files
    fin.close();
    // Files get closed automatically at the end of a program
    // so not strictly required here
    
    // But always a good idea to do
    // Someone might accidentally write something in an open file stream
     
    return 0;
}