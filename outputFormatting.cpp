#include <iostream>
#include <iomanip>

using namespace std;
using std::setw;
/**
 * This program demonstrate input output formatting
 *
 *
 */

int main ()
{
    int n[ 10 ]; // n is an array of 10 integers
// initialize elements of array n to 0
    for ( int i = 0; i < 10; i++ ) {
            n[ i ] = i + 100; // set element at location i to i + 100
    }
    cout << "Element" << setw( 10 ) << "Value" << endl;
// output each array element's value
    for ( int j = 0; j < 10; j++ ) {
            cout << setw( 7 )<< j << setw( 10 ) << n[ j ] << endl;
    }
    return 0;
}
