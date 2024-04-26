#include <bits/stdc++.h>
//#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;
int main()
{
	int c, s[18];

	string name;

	cout << "Welcome to Airline Reservations System!\n";
	cout << "Please enter your name: ";
	getline(cin,name);

	cout << "Choose a class: ";
	cin >> c;
	switch(c)
	{
	case 1:
		cout << "Bussiness class" << endl;
		cout << "Seats available are 1,2,3,4,5,6,7,8,9.\n";
		cout << "Pick a number: ";
		cin >> s;
		for(int i; i < 18; i++)
		if(s <= 9)
		{
			cout << "\n";
			cout << "--------------------------\n";
		cout << "Name: " << name << endl;
		cout << "Class: " << "First class" << endl;
		cout << "Seat no.: " << s << endl;
			cout << "--------------------------\n";
		}
		else
			cout << "Wrong number!  No seat for you!\n";
		break;
	case 2:
		cout << "Economiy class\n";
		cout << "Seats available are 10,11,12,13,14,15,16,17,18.\n";
		cout << "Pick a number: ";
		cin >> s;
		if(s >= 9)
		{
			cout << "\n";
			cout << "--------------------------\n";
		cout << "Name: " << name << endl;
		cout << "Class: " << "Economic class" << endl;
		cout << "Seat no.: " << s << endl;
			cout << "--------------------------\n";
		}
		else
			cout << "Wrong number!  No seat for you!\n";
		break;
	}


	system("pause");
	return 0;
}
