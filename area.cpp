#include <iostream>

using namespace std;
int main(void)
{
    const float pi = 3.14; //declaration and initialisation of variable as constant.
    int rad;
    float area;

    cout << "Enter radius of a circle: ";
    cin >> rad;
    area = (rad*rad)*pi; //variable is only being accessed and not modified
    cout << endl <<"Area of the circle is " <<area <<"cm2" << endl;

    //return 0;
}
