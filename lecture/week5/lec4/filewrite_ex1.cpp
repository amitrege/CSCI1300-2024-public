#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

int main()
{
   string line;
   double total = 0;

   // 1. create file stream objects/variables
   // ifstream means input file stream - used for reading from files
   ifstream fin;

    
   // ofstream means output file stream - used for writing to files
   ofstream fout;
    

   // 2. Associate the file stream object with the file
   //    by using .open(), with the file name (as a string) in parentheses
   fin.open("sales2.txt"); // Open input file
   fout.open("output.txt"); // overwrite mode; creates the file if it doesn't exist

   
    
   // 3. Check if file opened successfully
   if (fin.fail()) // or (!fin.open())
   {
      cout << "File couldn't be opened!" << endl;
      return -1; // return because I don't want my program to continue if file wasn't opened successfully
      // -1 to indicate the program didn't execute successfully
   }
   
    
   // ignore the first line
   getline(fin, line);
    
    
   
   // 4. Read lines from file 
   // eof() returns true if we have completed reading all the data in the file - end of file
    
   while(!fin.eof()) // as long as there is data to read from file, loop will execute
   {

      // check if there is any content in that line; we don't want to print empty lines
      // s != ""; s != " "; !s.empty()
      getline(fin, line);
      if (line.length() > 1 && line != " ")
      {
         for(int i = 0; i < line.length(); i++)
         {
            if(isdigit(line[i]))
            {
               total += stod(line.substr(i));
               break;
            }
         }
         
      }
      
   }
    
    // This is the only change when compared with 'fileread_ex4.cpp'
    // Write to a file instead of the screen
    // Very similar to using 'cout'
   fout << "Total sales for 2021: " << total;
   
    
   // 5. close BOTH files
   fin.close();
   fout.close();
    
   return 0;
}