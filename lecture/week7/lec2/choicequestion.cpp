#include <iostream>
#include <string>
#include "choicequestion.h"

// Empty default constructor
ChoiceQuestion::ChoiceQuestion()
{
}

void ChoiceQuestion::add_choice(string choice, bool correct)
{
    // Add to the list of choices
   choices.push_back(choice);
    
    // If the choices being added is the correct answer, update answer
   if (correct)
   {
      // Convert choices.size() to string  
      string num_str = to_string(choices.size());
      set_answer(num_str);
   }
}

// Display using base class function
void ChoiceQuestion::display() const
{
   // Display the question text
   Question::display();

   // Display the answer choices
   for (int i = 0; i < choices.size(); i++)
   {
      cout << i + 1 << ": " << choices[i] << endl;      
   }
}