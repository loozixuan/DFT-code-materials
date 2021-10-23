#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int getExam();
int getCoursework();
int calculateFinal(int, int);
void printResults(int);

//global variable

int main()
{
	int exam, coursework, final;
		exam = getExam();

	// main program
	// local variables

	coursework = getCoursework();
	final = calculateFinal(exam, coursework);
	printResults(final);
	system("pause");

}

int getExam()
{
	int exam;
	do
	{
		printf("Enter exam marks: ");
		scanf("%d", &exam);
	} while (exam < 0 || exam>100);
	return exam;
}

int getCoursework()
{
	int coursework;
	do {
		printf("Enter cw Marks: ");
		scanf("%d", &coursework);
	} while (coursework < 0 || coursework>100);
	return coursework;
}

int calculateFinal(int exam, int coursework)
{
	int final;
	final = exam * 0.6 + coursework*0.4;
	return final;
}

void printResults(int final)
{
	printf("Your final is %d", final);
}