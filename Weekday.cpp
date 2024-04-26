#include <iostream>

using namespace std;

int main()
{
    int day;
    cout <<"\tDAY OF WEEK DETAILS:\n";
    cout <<"\t....................\n";
    cout <<"Please enter the number of the weekday 1-7:" <<endl;
    cin>> day;

    switch(day)
    {
        case 1: cout <<"\nThe weekday is Sunday" <<endl;
            break;
        case 2: cout <<"\nThe weekday is Monday"<<endl;
            break;
        case 3: cout <<"\nThe weekday is Tuesday" <<endl;
            break;
        case 4: cout <<"\nThe weekday is Wednesday" <<endl;
            break;
        case 5: cout <<"\nThe weekday is Thursday" <<endl;
            break;
        case 6: cout <<"\nThe weekday is Friday" <<endl;
            break;
        case 7: cout <<"\nThe weekday is Saturday" <<endl;
            break;
        default:cout <<"\nYou entered a wrong choice" <<endl;
    }
    return 0;

}
