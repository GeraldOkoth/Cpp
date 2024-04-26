/*Given radius = 5.1, the program uses a function to calculate the area of a circle and returns the result to the main program*/
#include <iostream>

using namespace std;
const int PI = 3.142; //Global variable declaration.

double getArea(double radius); //Function prototype/function declaration.

int main()
{
    double radius1 = 5.1;

    int area1 = getArea(radius1);
    cout <<"Area 1 is: " <<area1 <<endl;

    return 0;
}

//Function definition
//Return the area of the circle given its radius
double getArea(double radius)
{
    return radius * radius * PI;
}




