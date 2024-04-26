#include <iostream>

using namespace std;

int main()
{
    int firstNum;
    int secondNum;
    char operator1;
    int result;

    cout <<"Please enter a number: " <<endl;
    cin >> firstNum;
    cout <<"Please enter another number: " <<endl;
    cin >> secondNum;
    cout <<"Please enter an operator: " <<endl;
    cin >>operator1;

    if (operator1 != '+' && operator1 != '-' && operator1 != '*' && operator1 != '/')
        cout <<"You entered an invalid operator! Please try again." << endl;
    else
    {
        switch(operator1)
        {
            case '+': cout <<firstNum <<"+" <<secondNum <<"=" <<result <<endl;
            result = firstNum + secondNum;
                break;
            result = firstNum - secondNum;
            case '-': cout <<firstNum <<"-" <<secondNum <<"=" <<result <<endl;
                break;
            result = firstNum * secondNum;
            case '*': cout <<firstNum <<"*" <<secondNum <<"=" <<result <<endl;
                break;
            result = firstNum / secondNum;
            case '/': cout <<firstNum <<"/" <<secondNum <<"=" <<result <<endl;
                break;
            default: cout <<"Invalid input!";
        }
    }
    return 0;

}
