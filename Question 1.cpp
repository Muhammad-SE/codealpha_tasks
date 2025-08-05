#include <iostream>
using namespace std;

int main()
{

	int courses, i;
	float gradepoints[50];
	cout << "Enter the number of courses you have taken: ";
	cin >> courses;

	char grade[100];
	for (i = 0; i < courses; i++)
	{
		cout << "Enter the grade for course" << i + 1 << " : ";
		cin >> grade[i];

		if (grade[i] == 'A')
			gradepoints[i] = 4.0;
		else if (grade[i] == 'B')
			gradepoints[i] = 3.0;
		else if (grade[i] == 'C')
			gradepoints[i] = 2.0;
		else if (grade[i] == 'D')
			gradepoints[i] = 1.0;
		else if (grade[i] == 'F')
			gradepoints[i] = 0.0;
		else
		{
			cout << "Invalid grade entered! Try again.\n";
			i--;
		}
	}

	float creditHours[50];
	for (i = 0; i < courses; i++)
	{
		cout << "Enter the credit hour of course " << i + 1 << " : ";
		cin >> creditHours[i];
	}

	float totalgrades = 0, totalcredithours = 0;
	for (i = 0; i < courses; i++)
	{
		totalgrades += gradepoints[i] * creditHours[i];
		totalcredithours += creditHours[i];
	}
	for (i = 0; i < courses; i++)
	{
		cout << "The grades of courses are: " << grade[i] << endl;
	}
	cout << "The total grades are " << totalgrades << " & total credit hours are " << totalcredithours << endl;
	float semesterGPA = 0;
	semesterGPA = totalgrades / totalcredithours;
	cout << "The semester GPA is: " << semesterGPA << endl;

	float previousTotalGrades, previousTotalCredits;
	cout << "\nEnter your total grade points from previous semesters: ";
	cin >> previousTotalGrades;
	cout << "Enter your total credit hours from previous semesters: ";
	cin >> previousTotalCredits;

	float cgpa = (previousTotalGrades + totalgrades) / (previousTotalCredits + totalcredithours);
	cout << "Your CGPA is: " << cgpa << endl;

	return 0;
}