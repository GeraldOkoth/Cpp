#include <iostream>

using namespace std;

int main()
{
    int num, sum = 0;
    for(num = 1; num < 90; num++)
    {
        if(num%2 != 0)
        {
            sum +=  num;
            cout << "Sum of odd numbers between 1 and 90 is: " <<sum <<endl;
        }
    }
    return 0;
}
