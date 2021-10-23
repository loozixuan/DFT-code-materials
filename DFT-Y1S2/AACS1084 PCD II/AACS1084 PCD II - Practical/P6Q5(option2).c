#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
int getValidMark();

int main()
{
	int pcdMark;
	pcdMark = getValidMark();
	if (pcdMark >= 50)
		printf("Pass!!!\n");
	else
		printf("Fail!!!\n");

	system("pause");
}

int getValidMark()
{
	int marks;
	do
	{
		printf("Enter Marks (0-100): ");
		scanf("%d", &marks);
	} while (marks > 100 || marks < 0);
	return marks;
}