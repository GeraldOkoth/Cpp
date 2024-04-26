#include <iostream>

using namespace std;

int max(int num1, int num2); //function declaration
//start of main program
int main()
{
    //local variable declaration:
    int a;
    int b;
    int ret;

    cout <<"Please enter two numbers" <<endl;
    cin >>a >>b;
    //calling a function to get maximum value.
    ret = max(a,b);
    cout <<"Maximum value is: " <<ret <<endl;
    return 0;
}

//function definition returning the maximum value between two numbers
int max(int num1, int num2)
{
    //local variable declaration
    int result;
    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}
