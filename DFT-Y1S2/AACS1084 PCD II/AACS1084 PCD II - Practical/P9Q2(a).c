#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void getExamMark();
void getCourseworkMark();
void calculateFinalMark();
void printFinalMark();

int exam, coursework, final; //global variable

int main()
{
	getExamMark();                   // must be from 0 to 100
	getCourseworkMark();             // must be from 0 to 40
	calculateFinalMark();// 60%*exam + coursework
	printFinalMark(); // display final mark tidily

	system("pause");

}

void getExamMark()
{
	do
	{
		printf("Enter exam marks: ");
		scanf("%d", &exam);
	} while (exam < 0 || exam>100);
}

void getCourseworkMark()
{
	do {
		printf("Enter cw Marks: ");
		scanf("%d", &coursework);
	} while (coursework < 0 || coursework>100);
}

void calculateFinalMark()
{
	final = exam * 0.6 + coursework*0.4;
}

void printFinalMark()
{
	printf("Your final is %d", final);
}