#include<iostream>

using namespace std;

int main()
{
    string name;
    int marks;

    cout <<"Enter your name: " <<endl;
    cin>>name;
    cout <<"Enter marks: " <<endl;
    cin>>marks;

    if (marks >= 90)
        cout <<"Congratulation! You scored an A" <<endl;
    else if (marks >= 80 && marks <= 89)
        cout <<"Very good! You scored a B. Keep up"<<endl;
    else if (marks >= 70 && marks <= 79)
        cout <<"Good! You scored a C" <<endl;
    else if (marks >= 60 && marks <= 69)
        cout <<"Tried! You scored D" <<endl;
    else
        cout <<"You failed! You scored grade F. Wait for suplementary exams" <<endl;

    return 0;
}
