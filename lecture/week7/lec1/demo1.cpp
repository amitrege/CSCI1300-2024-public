#include <iostream>
#include <string>
#include <vector>
#include "question.h"

int main()
{
   string response;
    
    
    // Ask a basic question
   Question q1;
   q1.set_text("Who was the inventor of C++?");
   q1.set_answer("Bjarne Stroustrup");
   q1.display();
    
   
   cout << "Your answer: ";
   
   // Take input (response) from user
   getline(cin, response);
    
   // Compare response with correct answer and report true or false
   cout << q1.check_answer(response) << endl;
   // Recall that boolean values when printed out via cout are 
   // printed as 1 or 0
    
   return 0;
}