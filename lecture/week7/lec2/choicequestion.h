#ifndef CHOICEQUESTION_H
#define CHOICEQUESTION_H

#include <vector>
#include "question.h"

class ChoiceQuestion : public Question
{
public:
   
   /**
      Constructor for choice question with no choices.
   */
   ChoiceQuestion();
   
   
   /**
      Adds an answer choice to this question.
      @param choice the choice to add
      @param correct true if this is the correct choice, false otherwise
   */
   void add_choice(string choice, bool correct);
   
   
   void display() const;
   
   
private:
   vector<string> choices; // list to store possible choices
};

#endif
