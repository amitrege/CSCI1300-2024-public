#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
   // 1. create file stream objects/variables
    
   // ftsream means input and output file stream - used for reading and writing to files
   fstream file1;
    // Can be useful when you want to read and write from the same file
    
    
   
   // 2. Associate the file stream object with the file
   //    by using .open(), with the file name (as a string) in parentheses
    
    // Alternatively, we can also ask the user to input the file they
    // want to open
    
   // string filename;
   // cout << "Enter filename: ";
   // getline(cin, filename); 
    
    
    
    // Open file in write and read mode
    // Note the parameters - these are standard; look up other options
   file1.open("poem.txt", ios::out | ios::in); 
   if (file1.fail())
   {
        cout << "File couldn't be opened!" << endl;
        return -1;
   }
    
    
    // Write something to the file
   file1 << "EXAMPLE" << endl;
    // Note we haven't done anything with the cursor yet so
    // we start writing at position 0
    
    // Since this already has existing characters, we overwrite 
    // whatever was in the file at that position
    
   string line;

   // seekg() sets the position of the next character to be extracted
   file1.seekg(0,ios::beg); // set cursor at beginning
    

   // 3. Read lines from file
   while (getline(file1, line))
   {
      // 4. process each line
      // check if there is any content in that line
      // line == ""; line = " "
      if(line.length() > 0)
      {
         cout << line << endl;
      }
   }

   // 6. close file
   file1.close();
   return 0;
}