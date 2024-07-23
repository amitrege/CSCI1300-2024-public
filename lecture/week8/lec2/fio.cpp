#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
 
    string s1;
    string s2;


/*
    cin >> s1;
    cin >> s2;
    cout << "We got the strings : " << s1 << " and " << s2 << endl;


*/


    
    
    
    


/*
    // getline ->> stops at the next new line ('\n')
    getline(cin, s1);
    getline(cin, s2);
    cout << "We got the strings : " << s1 << " and " << s2 << endl;


*/


    
    
    
    
    


/*
    // DO NOT MIX UP cin and getline()
    // I've typed -> amit\nrege
    
    cin >> s1;
    //cin.ignore();
    getline(cin, s2);
    cout << "We got the strings : " << s1 << " and " << s2 << endl;

    // This exact same thing applies when working with files
    // Do not mix fin >> with getline(fin, .....)
 */   

    
    
    
    
    
    
    
    
    
    
    
    
    
  /*  
    // Bandaid Fix - Use the .ignore() member function 
    // Just ignores the next character in the stream
    cin >> s1;
    cin.ignore();
    getline(cin, s2);
    cout << "We got the strings : " << s1 << " and " << s2 << endl;

    // This trick requires us to keep track of what is happening 
    // in the stream (in our head) - not super intuitive
    
    // Better to not mix cin/fin with getline()
   

*/
    
    
    




    
    
/*

    // Streams -> water going through a pipe
   
   // File Streams are used to take input or write to files
   // ifstream -> input file stream
   // ofstream -> output file stream
   // fstream -> can do both
   
   // Usually, we use ifstream or ofstream to make our intentions explicit

    ifstream ifs("1.txt"); 

    // This needs to be done for validation
    // I will be skipping this henceforth for brevity
    if(!ifs.is_open()) {
        cout << "File not found" << endl;
        return -1;
    }
    
    // Note how I used a different name ('ifs' and not 'fin')
    // for the input file stream
    
    string line;
    while(getline(ifs, line)) {
        cout << line << endl; // Print out whatever was read
    }

    ifs.close();

  */  
    
    
    
    
    
    


    
    
    

/*

    // Can do the exact same thing (not really) with the >> operator and stream object
    
    ifstream ifs("1.txt"); 
    
    string line;
    while(ifs >> line) {
        cout << line << endl;
    }

    ifs.close();

*/

    
    
    
    
    
    

    
   /* 
 

    // What if the file has data separated by a delimiter?
    // Seen this in the homework
    
    
    // csv -> comma separated vales
    ifstream ifs("example.csv");
    string line;
    int num;

    // Option 1:
    // Use the split() function you've been using in the homework

    // Option 2:
    // Split using string functions if you know how many times you need to split
    
    // I'm using Option 2 here
    
    while(getline(ifs, line)) {
        if (line.length() > 0) { // Check for empty lines; skipped after this
            
            // Find the index of the first comma and then take substrs
            int idx = line.find(',');
            string city = line.substr(0, idx);

            string n = line.substr(idx+1);

            cout << city << endl;
            cout << n << endl;

            num = stoi(n); // Might be stod(), stof() etc
                            // Depends on use case
        }
    }
    
    // Note: A lot of people forget to check if the line they've gotten
    // is empty
    
    // Make sure you check that before making any further steps
    // Might get weird errors otherwise

*/


    
    
    
    
    

    
    
    
    

/*

    // Another option:
    // Use the third arg of getline()
    ifstream ifs("example1.csv");
    
    string s;
    int num;
    int i = 0;
    while(getline(ifs, s, ',')){ // Gives me one number at a time
                                // Instead of one line at a time

        cout << s << endl;
        i += stoi(s); // string to int 
        // need to convert to int to use the number meaningfully
   }
   
   cout << i << endl;
   ifs.close();

*/







    
    
    
    
    
    
/*

    // Space separated lines are even easier to handle if you know types
    ifstream ifs("3.txt");
    
    string s;
    int num;
    string uni;
    string line;


    while(ifs >> s >> num >> uni) {
        cout << s << endl;
        cout << num << endl;
        cout << uni << endl;
    }
    
    ifs.close();

    */
    
    
    
    
    
    
    
    
    

/*
    // Exact same thing as above but a different loop check
    ifstream ifs("3.txt");
    
    string s;
    int num;
    string uni;
    string line;
    
    while(!ifs.eof()) {
        
        ifs >> s >> num >> uni;
        cout << s << endl;
        cout << num << endl;
        cout << uni << endl;
    }
    
    ifs.close();

 */   
    
    
    
    
    
    
    
    
    
/*

  
    // String stream (need to include <sstream>)
    // Can be useful for formatting
    
    string s = "Todays date is 06-24";
    stringstream ss(s); // equivalent to saying ss = s

    string word;
    
    // Split a larger string into words (using spaces) 
    while(ss >> word) {
        cout << word << endl;
    }
*/
    
    
    
    
    
    
    
    


    
   
  /* 
    // Can use stringstream to split lines as well 
    
    ifstream ifs("3.txt");
    
    string s;
    int num;
    string uni;
    string line;
    
    while(getline(ifs, line)) {
        stringstream ss(line);
        ss >> s >> num >> uni;
        cout << s << endl;
        cout << num << endl;
        cout << uni << endl;
    }
    
    ifs.close();

*/















/*   
    // csv -> comma separated vales
    
    // A more complicated method to split via delimiters
    // Use stringstream for each line
    // Then pass to getline() a stringstream type object
    
    ifstream ifs("example.csv");
    
    string line;
    int num;
    while(getline(ifs, line)){
        stringstream ss(line);

        string cell;
        while(getline(ss, cell, ',')) {
            cout << cell << endl;
        }
       
   }

   ifs.close();

*/














   
   
    
   // Output example - create an object of ofstream type 
   
    ofstream ofs("2.txt");

    string s = "hello";

    // similar to cout << (this ouptuts to screen)
    ofs << s;  
    // ofs << "\n" ;
    
    string s3 = "world";
    ofs << s3;
    ofs.close();

    // You can also add multiple strings on a single line



}