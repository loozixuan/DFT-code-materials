#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int finalMark(int prac, int cw, int exam);
int markIsValid(int mark, int maxMark);


int finalMark(int prac,int cw,int exam)
{
	int finalM;
	finalM = prac + cw + exam;
	return finalM;
}

int markIsValid(int mark, int maxMark)
{
	if (mark > 0 && mark <= maxMark)
		return 1;
	else
		return 0;
}

int main()
{
	//printf("FinalMark(15,9,45) = %d\n", finalMark(15, 9, 45)); ->q3(a)
	//printf("markIsValid(55, 30) = %d\n", markIsValid(55, 30)); ->q3(b)
	//printf("markIsValid(25, 30) = %d\n", markIsValid(25, 30)); ->q3(b)
	int practicalMark,courseworkMark,examMark,finalAnswer;

	do {
		printf("Enter Practical Mark (0-30): ");    //(!1) = 0  /  (!0) = 1
		scanf("%d", &practicalMark);                //while (1) - non-zero - the while will continue to loop
	} while (!markIsValid(practicalMark, 30));      //while (0) - zero - the while loop will stop
	printf("\n");

	do {
		printf("Enter Coursework Mark (0-20): ");
		scanf("%d", &courseworkMark);
	} while (!markIsValid(courseworkMark, 20));
	printf("\n");

	do {
		printf("Enter Exam Mark (0-50): ");
		scanf("%d", &examMark);
	} while (!markIsValid(examMark, 50));

	finalAnswer = finalMark(practicalMark, courseworkMark, examMark);
	printf("\nFinal Marks is %d. ", finalAnswer);
	system("pause");
}