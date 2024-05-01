#include<iostream>
#include <string>	

using namespace std;

class student
{
private:
	string admno;
	string sname;
	string c1, c2, c3, c4, c5, c6, c7;

	/*Private function to output total marks
	float ctotal()
	{
		return eng + math + science;
	}*/
public:
	void takeData()
	{
	    cout << "Student name: ";
	    getline(cin, sname);
		cout << "Admission number: ";
		cin >> admno;
		cout << "Please enter at least 3 and at most 7 courses: "  << endl;
		cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6 >> c7;
	}
	void showData()
	{
		cout << "Student name: " << sname << endl;
		cout << "Admission number: " << admno << endl;
		cout << c1 << endl << c2 << endl << c3 << endl << c4 << endl << c5 << endl << c6 << endl << c7 << endl << endl;
	}
};

int main ()
{
    cout << "\t\t\t\t\t\t======Student Management System======" <<endl;
    cout << "\t\t\t\t\t\t      -------------------------" <<endl;

    student obj;

    cout << "Please enter student details: " <<endl <<endl;
    obj.takeData();
    cout << "You entered the following details: " <<endl <<endl;
    obj.showData();

	//clrscr();
    //getch();

	return 0;
}
