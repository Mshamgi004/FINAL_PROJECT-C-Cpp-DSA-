// C++ Programming //
// Q.1 //
// MAHADEV G I //



#include<iostream>
using namespace std;

class Employee
{
	float salary;
	int no_of_hours;
public:
	void getinfo(float s, float t)
	{
	    salary=s;
	    no_of_hours=t;
	}
	void AddSal()
	{
		if (salary < 500)
			salary += 10;
	}
	void AddWork()
	{
		if (no_of_hours > 6)
			salary += 5;
	}
	void DisplaySalary()
	{
		cout << salary;
	}

};


int main()
{
    float s,t;
    		cout << "Enter the salary of employee: ";
		cin >> s;
		cout << "Enter the number of hours: ";
		cin >> t;
    
	Employee emp;
		emp.getinfo(s,t);
		emp.AddSal();
		emp.AddWork();

		cout << "\nThe final salary of employee is:";
		emp.DisplaySalary();
}
