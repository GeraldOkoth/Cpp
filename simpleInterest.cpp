#include <iostream>

using namespace std;

int main()
{
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
}
