#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
int getValidMark(int marks);

int main()
{
	int pcdMark=0;
	pcdMark = getValidMark(pcdMark);
	if (pcdMark >= 50)
		printf("Pass!!!\n");
	else
		printf("Fail!!!\n");

	system("pause");
}

int getValidMark(int marks)
{
	do
	{
		printf("Enter Marks: ");
		scanf("%d", &marks);
	} while (marks > 100 || marks < 0);
	return marks;
}