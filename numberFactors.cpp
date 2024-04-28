#include <iostream>

using namespace std;

int main() {
    // Iterate through numbers from 2 to 100
    for (int num = 2; num <= 100; num++) {
        cout << "Factors of " << num << " are: ";

        // Find factors of the current number
        for (int i = 1; i <= num; ++i) {
            if (num % i == 0) {
                cout << i << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
