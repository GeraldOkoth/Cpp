#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string myDataType; //declare a string variable to store the data type entered by the user.
    cout << "Size of data types." << endl << endl;
    cout << "Enter the data type you want size printed." << endl; //Prompt a user to enter a data type.
    getline(cin, myDataType); //Accept user input from the console.
    //Check for the validity of the data type.
    if (myDataType != "int" && myDataType != "char" && myDataType != "float" && myDataType != "double" && myDataType != "short" && myDataType != "long" && myDataType != "bool" && myDataType != "long int" && myDataType != "long double")
    {
        cout << "You entered an invalid data type!" << endl; //Prints invalidity if data type does not much the valid data types.
    }
    else //Compares the data types and print the size.
    {
        if (myDataType == "int")
        {
            cout << "Size of " << myDataType << " = "  << sizeof(int) << " byte(s)" << endl;
        }
    else if (myDataType == "char")
    {
        cout << "Size of " << myDataType << " = "  << sizeof(char) << " byte(s)" << endl;
    }
    else if (myDataType == "float")
    {
        cout << "Size of " << myDataType << " = "  << sizeof(float) << " byte(s)" << endl;
    }
    else if (myDataType == "double")
    {
        cout << "Size of " << myDataType << " = "  << sizeof(double) << " byte(s)" << endl;
    }
    else if (myDataType == "bool")
    {
        cout << "Size of " << myDataType << " = "  << sizeof(bool) << " byte(s)" << endl;
    }
    else if (myDataType == "short")
    {
        cout << "Size of " << myDataType << " = "  << sizeof(short) << " byte(s)" << endl;
    }
    else if (myDataType == "long")
    {
        cout << "Size of " << myDataType << " = "  << sizeof(long) << " byte(s)" << endl;
    }
    else if (myDataType == "long int")
    {
        cout << "Size of " << myDataType << " = "  << sizeof(long int) << " byte(s)" << endl;
    }
    else if (myDataType == "long double")
    {
        cout << "Size of " << myDataType << " = "  << sizeof(long double) << " byte(s)" << endl;
    }
    }
    return 0;
}


    //Prints the size of various data types.
    //Alternative code using switch statement.


/*#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string myDataType;
    cout << "Size of data types:" << endl << endl;
    cout << "Enter the data type you want the size printed:" << endl;
    getline(cin, myDataType);

    if (myDataType != "int" && myDataType != "char" && myDataType != "float" && myDataType != "double" && myDataType != "short" && myDataType != "long" && myDataType != "bool" && myDataType != "long int" && myDataType != "long double")
    {
        cout << "You entered an invalid data type!" << endl;
    }
    else
    {
        switch (myDataType[0])
        {
            case 'i':
                cout << "Size of " << myDataType << " = " << sizeof(int) << " byte(s)" << endl;
                break;
            case 'c':
                cout << "Size of " << myDataType << " = " << sizeof(char) << " byte(s)" << endl;
                break;
            case 'f':
                cout << "Size of " << myDataType << " = " << sizeof(float) << " byte(s)" << endl;
                break;
            case 'd':
                cout << "Size of " << myDataType << " = " << sizeof(double) << " byte(s)" << endl;
                break;
            case 's':
                cout << "Size of " << myDataType << " = " << sizeof(short) << " byte(s)" << endl;
                break;
            case 'l':
                if (myDataType == "long")
                {
                    cout << "Size of " << myDataType << " = " << sizeof(long) << " byte(s)" << endl;
                }
                else if (myDataType == "long int")
                {
                    cout << "Size of " << myDataType << " = " << sizeof(long int) << " byte(s)" << endl;
                }
                else if (myDataType == "long double")
                {
                    cout << "Size of " << myDataType << " = " << sizeof(long double) << " byte(s)" << endl;
                }
                break;
            case 'b':
                cout << "Size of " << myDataType << " = " << sizeof(bool) << " byte(s)" << endl;
                break;
            default:
                cout << "Invalid data type!" << endl;
                break;
        }
    }
    return 0;
}
*/


//Alternative code.

/*
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    //Print the sizes of the various data types.
    cout << "Size of int: " << sizeof(int) << " byte(s)" << endl;
    cout << "Size of char: " << sizeof(char) << " byte(s)" << endl;
    cout << "Size of float: " << sizeof(float) << " byte(s)" << endl;
    cout << "Size of double: " << sizeof(double) << " byte(s)" << endl;
    cout << "Size of long: " << sizeof(long) << " byte(s)" << endl;
    cout << "Size of boolean: " << sizeof(bool) << " byte(s)" << endl;
    cout << "Size of long double: " << sizeof(long double) << " byte(s)" << endl;
    cout << "Size of short: " << sizeof(short) << " byte(s)" << endl;
    cout << "Size of short int: " << sizeof(short int) << " byte(s)" << endl;
    cout << "Size of long int: " << sizeof(long int) << " byte(s)" << endl;

    return 0;
}
*/
