#include <iostream>
using namespace std;

int main() {
	int x, y, sum; //Declare three variables 
  	cout << "Type a number: ";
  	cin >> x; //Get and store first input from the user in variable x
  	cout << "Type another number: ";
  	cin >> y; //Get and store second input from the user in variable y
  	sum = x + y; //Calculate sum of two inputs
  	cout << "Sum is: " << sum; //Output sum
  	return 0;
//Alternative code	
/*#include <iostream>

int main()
{
        int x, y, sum;

        std::cout << "Input the first number: ";
        std::cin >> x;
        std::cout << "Input the second number ";
        std::cin >> y;
        sum = x+y;
        std::cout << "The sum is: " << sum;
        return 0;
}*/
}

