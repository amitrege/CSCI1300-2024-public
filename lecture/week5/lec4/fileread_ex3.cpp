#include <iostream>
#include <fstream>

using namespace std;

// Similar to 'fileread_ex2.cpp' but using 'getline()' instead of 'fin'

int main()
{
    string line;

    
    // 1. create file stream objects/variables
    // ifstream means input file stream - used for reading from files
    ifstream fin;

    
    // 2. Associate the file stream object with the file
    //    by using .open(), with the file name (as a string) in parentheses
    fin.open("sales2.txt"); // Open input file
    
    
    
    // 3. Check if file opened successfully
    if (fin.fail()) // or (!fin.open())
    {
        cout << "File couldn't be opened!" << endl;
        return -1; // return because I don't want my 
        // program to continue if file wasn't opened successfully

        // -1 to indicate the program didn't execute successfully
    }
    
    
    // process header - first line of text that doesn't contain the data we need
    // process the header and do nothing with it
    getline(fin, line);
    
    

    // 4. Read lines from file 
    // eof() returns true if we have completed reading all the data in the file - end of file
    
    while(!fin.eof()) // as long as there is data to read from file, loop will execute
    {

        // We first check if there is any content in a line 
        // Because we don't want to print empty lines
        // Many ways to check - s != ""; s != " "; !s.empty()

        getline(fin, line); // reads each line of data and stores it 
                            // in the 'line' variable of type string
        
        
        // 'line' is non empty and is not just a space
        if (line.length() > 0 && line != " ")
        {
            // Print whatever we got
            cout << line << endl;
        }
    }
    
    // Note that since we just printed the 'line' as whole, we couldn't
    // get spaces in front of each number like in 'fileread_ex2.cpp'
    
    // To do that using getline(), we'd have to break the 'line' into 
    // two parts and then use setw()
    
    // 5. close files
    fin.close();
     
    return 0;
}