#include"CGPA.h"
#include<iomanip>
#include<iostream>
using namespace std;
CGPA::CGPA() :noOfSubjects(0), credit(0), gradePoint(0), totalCreditHours(0), totalGradePoints(0), result(0.0)
{

}
void CGPA::inputResult()
{
	cout << "\nEnter number of subjects: ";
	cin >> noOfSubjects;
	for (int i = 0; i < noOfSubjects; i++)
	{
		cout << "Enter credit hours for Subject" << i + 1 << " : ";
		cin >> credit;
		cout << endl;
		cout << "Enter gradePoints for Subject" << i + 1 << " : ";
		cin >> gradePoint;
		cout << endl;
		totalCreditHours += credit;
		totalGradePoints = totalGradePoints + (credit * gradePoint);
	}
	
}
void CGPA::calculateGrade()
{
	result = static_cast<double>(totalGradePoints / totalCreditHours);
}
void CGPA::displayGrade()
{
	calculateGrade();

	cout << "\nYour CGPA : " << fixed << setprecision(2) << result;
}