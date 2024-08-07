#include <cctype>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
   // 1. create file stream objects/variables

   // ifstream means input file stream - used for reading from files
   ifstream fin;

   // 2. Associate the file stream object with the file
   //    by using .open(), with the file name (as a string) in parentheses

   fin.open("poem.txt"); // Open input file

   // 3. Check if file was opened
   if (fin.fail())
   {
      cout << "File couldn't be opened!" << endl;
      return -1;
   }

   string line;
   int count = 0;

   // 3. Read lines from file
   while (!fin.eof())
   {
      getline(fin, line);
      count++;

      // 4. process each line
      cout << line << endl; 

      if(count == 2)
      {
 
          fin.seekg(0,ios::beg); 
          // Set the cursor at an offset of 0 from the beginning
          // That is, set the cursor to the beginning
          
          
          // In general, the function signature is:
          // seekg(offset, direction)
          
          // That is, place the cursor 'offset' positions away from 
          // the 'direction' parameter
          
          
          
          // Where the direction param can be one of the following:
          // ios::beg - takes the location of the first character in the file
         // ios::cur - takes the current location of the file cursor 
         // ios::end - takes the location after the last character in the file
          // Play around with changing the seekg() function to understand

      }
      cout << fin.tellg() << endl;         
   }
   
   // 5. close file 
   fin.close();
   return 0;
}