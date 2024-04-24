#include <iostream>
using namespace std;

//Prints the result of operation on two numbers
int main() {
    int num1, num2; //Declare three variables
    //int result = num1 + num2;
    char myOperator;
  	cout << "Enter a number: " << endl << endl;
  	cin >> num1; //Get and store first input from the user in variable num1.
  	if (num1 <= 0)
    {
        cout << "You entered an invalid number!" << endl;
        exit(0);
    }
    else
    {
        cout << endl << "Type an operator: " << endl << endl; //Get an operator from the user.
        cin >> myOperator;
        if (myOperator != '+' && myOperator != '-' && myOperator != '/' && myOperator != '*') //Check whether the user typed in a valid operator.
        {
            cout << "You typed an invalid operator!" << endl;
            cout << "Please type in a valid operator!" << endl;
            exit(0);
        }
        else
        {
            cout << endl << "Enter another number: " << endl << endl;
            cin >> num2; //Get and store second input from the user in variable num2*/
            if (num2 <= 0)
                {
                    cout << "You entered an invalid number!" << endl;
                    exit(0);
                }
        }
    }
    int result;
  	switch (myOperator)
  	{
  	    case '+':
  	        result = num1 + num2;
  	        cout << "Sum = " << result << endl;
  	        break;

        case '-':
            result = num1 - num2;
            cout << "Difference = " << result << endl;
            break;

  	    case '*':
  	        result = num1 * num2;
  	        cout << "Product = " << result << endl;
            break;

  	    case '/':
  	        result = num1 / num2;
  	        cout << "Quotient = " << result << endl;
            break;
    }
    return 0;
}
