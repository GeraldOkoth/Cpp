#include<iostream>

using namespace std;
class student
{
private:
	int admno;
	string sname;
	float eng ,math, science;
	float total;
	float ctotal()
	{
		return eng + math + science;
	}
public:
	void takeData()
	{
		cout << "Enter admission number: ";
		cin >> admno;
		cout << "Enter student name: ";
		cin >> sname; //getline(cin, sname);
		cout << "Enter marks in english, math, science "  << endl;
		cin >> eng >> math >> science;
		total = ctotal();
	}
	void Showdata()
	{
		cout << "Admission number " << admno << "\nStudent name " << sname << "\nEnglish "
			<< eng << "\nMath "<< math <<"\nScience " << science << "\nTotal " << total;
	}
};
int main ()
{
	//clrscr();
	student obj ;
	obj.takeData();
	obj.Showdata();
	//getch();
	return 0;
}
