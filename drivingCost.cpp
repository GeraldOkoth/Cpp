#include <iostream>

using namespace std;

int main()
    {
        int totalKm;
        int costPerLtr;
        int parkingFee;
        int tolls;
        int total_driving_cost;

        cout << "Please enter total kilometres per day: " <<endl;
        cin >> totalKm;
        cout << "Please enter cost per litre: " <<endl;
        cin >>costPerLtr;
        cout << "Please enter parking fee: " <<endl;
        cin >>parkingFee;
        cout << "Please enter the number of tolls: " <<endl;
        cin >> tolls;

        total_driving_cost = totalKm + costPerLtr + parkingFee + tolls;

        cout << "You total driving cost is: " << total_driving_cost <<endl;

        return 0;
    }
