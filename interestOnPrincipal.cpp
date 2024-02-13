#include <iostream>

using namespace std;

int interest(int principal, int intRate, int time); //function declaration/prototype.

int interest1; //Global variable declaration.
//Entry into the main function.
int main()
{
    //local variable declaration
    int principal;
    int intRate;
    int time;


    cout <<"Please enter the Principal amount, Interest rate and time: " <<endl;
    cin >>principal >>intRate >>time;

    //function call.
    interest1 = interest(principal ,intRate ,time);
    cout <<"You interest on account balance is: " <<interest1 <<endl;

    return 0;
}

int interest(int principal, int intRate, int time)
{
    //int result;
    interest1 = (principal * intRate * time)/100;

    return interest1;
}
