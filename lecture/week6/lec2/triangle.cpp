#include <iostream>

using namespace std;

void print_triangle(int side_length)
{
   if (side_length < 1) 
   { 
      return; 
   } 

   print_triangle(side_length - 1);

   for (int i = 0; i < side_length; i++)
   {
      cout << "[]";
   }
    

   cout << endl;
}


int main()
{
    /*
    Here we make a function call before the print statement

    Therefore, the first time we print out a line, we will have reached
    the bottom of the recursion
    Only after that will we reach the print statement. 

    print_triangle(4) - 
    calls print_traingle(3)

    Before it can move to the next line in the definition,
    we need to wait for print_triangle(3) to evaluate

    Similarly, print_traingle(3) calls print_triangle(2) and so on
    till we hit print_triangle(0)

    Therefore, print_triangle(1) can move on to the for loop
    */
   
    print_triangle(4);
    
    // Thus we can see the order in which the recursive call is made 
    // matters significantly 
}