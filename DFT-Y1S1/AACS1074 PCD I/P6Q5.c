#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()
{
	int creditHrs;
	char ranking1[] = "Freshman", ranking2[] = "Sophomore";
	char ranking3[] = "Junior", ranking4[] = "Senior";

	printf("Number of credit hours:");
	scanf("%d", &creditHrs);

	if (creditHrs < 45)
		printf("%s\n", ranking1);

	else if (45 <= creditHrs && creditHrs<90)
		printf("%s\n", ranking2);

	else if (90 <= creditHrs&& creditHrs<135)
		printf("%s\n", ranking3);

	else
		printf("%s\n", ranking4);

	
	system("pause");
}