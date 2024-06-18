#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string declaration and initialization
    string first_name ="Leslie ";
    string last_name = "Knope"; // 
    string space = " "; // This is not an empty string - ""; string with
                        // a space in it 
    
    
    
    
    
    // Example in printing a string  - we've seen these many times before
    
    // string sentence = "This is an example"; // enclosed in ""
    // cout << sentence << endl;
    // cout << "This is an example" << endl // equivalent
    
    

    
    
    
    // concatenation (joining two strings together)
    string full_name = first_name + last_name;
   
    cout << full_name << endl;

    // error: cannot concatenate literals
    // full_name = "Leslie" + " " + "Knope"; // not allowed


    
    
    
    


    // length of a string
    // string_var.length();
    
    // Can just do the above and it will be a valid statement in C++
    // But usually we want to STORE the result from a member function
    // So use a variable
    
    // int len = string_var.length();
    
    
    
    
    
    
    



    // referencing individual characters in a string
    /*
        L  e  s  l  i  e     K  n  o  p  e
        0  1  2  3  4  5  6  7  8  9  10 11
        1  2  3 ...
    */
    
    // How to access each character at a given position in a string?
    // Use the [] (square brackets) notation below
    
    cout << "--------------------------------------------------" <<endl;
    cout << "full_name[0] is " << full_name[0] << endl; //index 0 is 1st letter
    
    cout << "full_name[1] is " << full_name[1] << endl; //index 0 is 2nd letter
    
    cout << "full_name[2] is " << full_name[2] << endl; 
    
    cout << "full_name[3] is " << full_name[3] << endl; 
    
    cout << "full_name[4] is " << full_name[4] << endl; 
    
    cout << "full_name[5] is " << full_name[5] << endl; 

    
    
    int len = full_name.length();
    cout << "full_name[11] is " << full_name[len - 1] << endl; // len - 1 will return the last character in the string 
    
    cout << "full_name[12] is " << full_name[12] << endl; // empty
    // Position 12 and beyond does not exist in the string
    
    cout << "--------------------------------------------------" <<endl;

    
    
    
    
    
    
    
    
    
    
    
    
    // find a character or string 
    // string_var.find("string"): search for "string" inside the string 
    // in string_var
    
    
    // string_var.find("string",starting_position):: search for "string" 
    //inside the string in string_var starting from the position
    // 'starting_position'
    
    
    cout << full_name.find("L") << endl;    //  Note the double quotes
    // We are searching for strings even though they look like single
    // characters
    
    cout << full_name.find("l") << endl;    //  
    cout << full_name.find("e") << endl;    //  
    cout << full_name.find("ie") << endl;   // 
    cout << full_name.find("e", 3) << endl; //  
    cout << "--------------------------------------------------" <<endl;

    
    
    
    
    
    
    
    
    // substring
    // string_var.substr(starting_position,num_of_characters)
    
    // First arg - start position
    // Second arg - no of charcters to process
    
    // Leslie Knope
    
    cout << full_name.substr(0,3) << " is a substring of " << full_name << endl;
    
    cout << full_name.substr(2,8) << " is a substring of " << full_name << endl;
    
    cout << full_name.substr(7) << " is a substring of " << full_name << endl;  // Knope / K
    
    cout << full_name.substr() << " is a substring of " << full_name << endl;  // full string

    cout << "--------------------------------------------------" <<endl;

    
    
    
    
    
    
    // replace a character or string; http://www.cplusplus.com/reference/string/string/replace/
    
    // string.replace(starting_position, number_of_characters, "string")
    
    // First arg - start position
    // Second arg - no of charcters to process
    // Third arg - string to replace the above substring with
    
    // Leslie Knope
    
    cout << full_name.replace(7,7,"rocks") << endl; // replace the 7 
    //characters starting from position 7 inside 'full_name' with "rocks"
    
    cout << full_name.replace(0,4,"") << endl;
    
    cout << full_name.replace(4,3,"") << endl;
    
    cout << full_name << endl; // full_name has been updated
    
    // We can see  from the output of the previous statement that
    // the .replace() function modifies the variable it is acting on
    
    // This is out first encounter with such a function but we will 
    // see this a lot as the term progresses

    return 0;

}