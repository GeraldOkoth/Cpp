#include <iostream>

using namespace std;

int main()
{
   char grade;

   cout <<"Enter your grade: " <<endl;
   cin >> grade;

   switch (grade)
   {
       case 'A':
       case 'a': cout << "Your grade is A. Distinction" <<endl;
            break;
       case 'B':
       case 'b': cout << "Your grade is B. Credit" <<endl;
            break;
       case 'C':
       case 'c': cout << "Your grade is C. Average" <<endl;
            break;
       case 'D':
       case 'd': cout << "Your grade is D. Pass" <<endl;
            break;
       case 'F':
       case 'f': cout << "Your grade is E. Fail" <<endl;
            break;
       default: cout << "The grade you entered is invalid" <<endl;
            break;
   }
   return 0;
}


