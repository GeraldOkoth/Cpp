#include <iostream>

using namespace std;

int main()
{
    float area;
    int radius, width, length, side1, side2, side3;
    const float PI = 3.142;
    char choice;

    cout <<"Choose the area of the shape you want to calculate from the options below: " <<endl;
    cout <<"a) Circle" <<endl;
    cout <<"b) Triangle" <<endl;
    cout <<"c) Rectangle" <<endl <<endl;

    cin >> choice;

    if(choice == 'a')
    {
        cout <<"You chose a circle.";
        cout <<" Please enter the radius of the circle." <<endl;
        cin >> radius;
        area = PI* radius * radius;
        cout <<"The area of the circle is: " <<area <<" square units" <<endl;
    }
    else if(choice == 'b')
    {
        cout <<"You chose a triangle.";
        cout <<" Please enter the sides of the triangle." <<endl;
        cin >> side1 >> side2 >> side3;
        area = side1 * side2 * side3;
        cout <<"The area of the triangle is: " <<area <<" square units" <<endl;
    }
    else if(choice == 'c')
    {
        area = length * width;
        cout <<"You chose a rectangle.";
        cout <<" Please enter the length and width of the rectangle." <<endl;
        cin >> length >> width;
        area = length * width;
        cout <<"The area of the rectangle is: " <<area <<" square units" <<endl;
    }
    else{
        cout <<"Invalid choice: " <<endl;
    }
    return 0;

}
