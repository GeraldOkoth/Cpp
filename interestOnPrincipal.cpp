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

int principal;
    int rate;
    int time;
    int interest;

    cout << "Please enter the principal amount:ksh. ";
    cin >> principal;
    cout << "Please enter the rate: ";
    cin >> rate;
    cout << "Please enter time: ";
    cin >> time;

    interest = (principal*rate*time)/100;
    cout <<endl << "The simple interest is ksh. " << interest << " from the details you input: " << endl <<"principal:ksh. " <<principal <<endl  << "rate: " <<rate <<"%" <<endl  << "time: "  <<time <<"years" <<endl;

    return 0;

    int bonus = 200;
    int commission;
    int grossSales;
    float earnings;

    cout <<"Enter your gross sales for last week: " <<endl;
    cin >> grossSales;

    commission = (9 * grossSales)/100;
    earnings = commission + bonus;

    cout << "Your earnings for last week is: " <<earnings <<endl;

    return 0;

