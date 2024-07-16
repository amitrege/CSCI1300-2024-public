#include <iostream>
#include "question.h"

// Default constructor - does nothing
Question::Question() {
}

// Setter for text attribute
void Question::set_text(string question_text)   
{
   text = question_text;
}

// Setter for answer attribute
void Question::set_answer(string correct_response)
{
   answer = correct_response;
}

// Return true or false depending on whether response matches answer
bool Question::check_answer(string response) const
{
   return (response == answer);
}

// Print question 
void Question::display() const
{
   cout << text << endl;
}