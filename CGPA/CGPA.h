#ifndef CGPA_H
#define CGPA_H
class CGPA
{
private:
	int noOfSubjects;
	int credit;
	int gradePoint;
	int totalCreditHours;
	int totalGradePoints;
	double result;
public:
	CGPA();
	void inputResult();
	void calculateGrade();
	void displayGrade();
};
#endif