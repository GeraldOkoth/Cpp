#include <iostream>

using namespace std;

int main()
{
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

}
