#include <iostream>

using namespace std;

int main()
{
    int firstNo;
    int secondNo;
    int sum;
    float average;

    cout << "Please enter the first number: " << endl;
    cin >> firstNo;
    cout << "Please enter the second number: " << endl;
    cin >> secondNo;

    sum = firstNo + secondNo;
    average = (firstNo+secondNo)/2;

    cout << "The sum is " << sum << " and the average is " << average << endl;

    return 0;
}
