//Simple calculator
#include <iostream>
#include <math.h>

using namespace std;
/**
 * This is a simple calculator which implements some mathematical functions
 *
 *
 */
//Global variable declaration.
const double PI = 3.142;
//Function prototype/function declaration.
double areaOfCircle(double radius);
double areaOfTriangle(double base, double height);
double areaOfRectangle(double length, double width);
double averageOfNums(double firstNumber, double secondNumber);


int main()
{
    float area, base, height, length, width, firstNumber, secondNumber;
    double radius, average;
    int selectOption;

    cout << "\t\t\t\t\t\t======Calculator======" <<endl;
    cout << "\t\t\t\t\t\t      ----------" <<endl;

    cout << "This calculator provides specific functions to compute some mathematical operations." <<endl;
    cout << "Please select an option below for the mathematical operation you want to perform: " <<endl <<endl;

    cout << "---options---" <<endl;
    cout << "1. Area of a Circle" <<endl << "2. Area of a Triangle" <<endl << "3. Area of a Rectangle" <<endl << "4. Average" <<endl
         << "5. Sum of Even numbers" <<endl << "6. Sum of Odd numbers" <<endl <<endl;

    cin >> selectOption; //Store user's input.
    switch(selectOption)
    {
        case 1:
            cout << "You have selected option 1." <<endl;
            cout << "Please enter the radius of the circle: ";
            cin >> radius;
            area = areaOfCircle(radius); //variable is only being accessed and not modified
            cout <<"\nArea of the circle is " <<area <<" square cm" << endl;
            break;
        case 2:
            cout << "You have selected option 2." <<endl;
            cout << "Please enter the base and height of the triangle: " <<endl;
            cout << "Base: ";
            cin >> base;
            cout << "Height: ";
            cin >> height;
            area = areaOfTriangle(base, height); //variable is only being accessed and not modified
            cout <<"\nArea of the triangle is " <<area <<" square cm" << endl;
            break;
        case 3:
            cout << "You have selected option 3." <<endl;
            cout << "Please enter the length and width of the rectangle: " <<endl;
            cout << "length: ";
            cin >> length;
            cout << "width: ";
            cin >> width;
            area = areaOfRectangle(length, width); //variable is only being accessed and not modified
            cout <<"\nArea of the rectangle is " <<area <<" square cm" << endl;
            break;
        case 4:
            cout << "You have selected option 4." <<endl;
            cout << "Please enter at least two numbers: " <<endl;
            cout << "first number: ";
            cin >> firstNumber;
            cout << "second number: ";
            cin >> secondNumber;
            average = averageOfNums(firstNumber, secondNumber); //variable is only being accessed and not modified
            cout <<"\nThe average is " <<average  << endl;
            break;
        case 5:
            cout << "You have selected option 5." <<endl;
            cout << "Sorry! This function is currently not available. Please wait as we work on it." <<endl;
            break;
        case 6:
            cout << "You have selected option 6." <<endl;
            cout << "Sorry! This function is currently not available. Please wait as we work on it" <<endl;
            break;
        default:
            cout << "invalid option! Please try again." <<endl;
    }
    return 0;
}

//Function definition
//Function to compute area of a circle upon radius input from the user
double areaOfCircle(double radius)
{
    return radius * radius * PI;
}
//Function to compute area of a triangle upon base and height input from the user
double areaOfTriangle(double base, double height)
{
    return (base * height)/2;
}
//Function to compute area of a rectangle upon length and width input from the user
double areaOfRectangle(double length, double width)
{
    return length * width;
}
//Function to compute the average of numbers entered by the user
double averageOfNums(double firstNumber, double secondNumber)
{
    return (firstNumber + secondNumber)/2;
}




