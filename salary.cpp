#include <iostream>

using namespace std;
int main()
{
    int age;
    float salary;
    int empNo;

    cout << "Please enter employee Number: ";
    cin >> empNo;
    cout <<"Please enter your age: ";
    cin >> age;
    cout << "Please enter your salary: ";
    cin>> salary;

    cout << "Your employee number is " << empNo <<endl << "Your salary is "
    << salary <<endl << "and your age is " << age << endl;
    return 0;
}
