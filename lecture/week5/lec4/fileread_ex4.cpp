#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

// Use the strategy from 'fileread_ex3.cpp' and calculate the sum of 
// all sales numbers

int main()
{
    double var;
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
        return -1; // return because I don't want my program to continue if file wasn't opened successfully
        // -1 to indicate the program didn't execute successfully
    }
    
    
    
    // ignore the first line
    getline(fin, line);
    
    

    // we process the header before the while loop because our loop only 
    // processes numeric data
    
    // when our loop code tries to process non-numeric data we would get 
    // the follwoing error
    
    // libc++abi: terminating with uncaught exception of type 
    // std::invalid_argument: stoi: no conversion
    // zsh: abort      ./a.out
        
    
    double total = 0;
    string month;

    
    // 4. Read lines from file 
    // eof() returns true if we have completed reading all the data in the file - end of file
    
    while(!fin.eof()) // as long as there is data to read from file, loop will execute
    {

        // check if there is any content in that line; we don't want to print empty lines
        // s != ""; s != " "; !s.empty()

        // stoi(), stod()
        getline(fin, line); 
     
        // Check if line is non-trivial
        if (line.length() > 1 && line != " ")
        {
            // Find the number within a given line
            // Convert it to a double and then add it to a sum variable
            for(int i = 0; i < line.length(); i++)  
            {
                // Find the first character which is a digit
                if(isdigit(line[i]))
                {                
                    // Extract the number starting from the first digit
                    // of the number using the substring function
                    
                    total += stod(line.substr(i)); // stoi for ints
                    break;
                }
            }

        }

    }

    cout << "Total: " << total << endl;
    
    // 5. close files
    fin.close();
     
    return 0;
}