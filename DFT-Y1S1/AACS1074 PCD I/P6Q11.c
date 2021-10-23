#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()
{
	int month, year;
	printf("Month :");
	scanf("%d", &month);

	switch (month)
	{

	case 1:
		printf("January\n");
		printf("January ha 31 days\n");break;

	case 2:
		printf("Februaby\n");
		printf("Year:");
		scanf("%d", &year);
		if (year % 4 == 0)
		{
			printf("It is a leap year\n");
			printf("In a leap year, February has 29 days\n");
		}
		else
		{
			printf("It's not a leap year\n");
			printf("February has 28 days\n");
		}break;

	case 3:
		printf("March\n");
		printf("March has 31 days");break;

	case 4:
		printf("April\n");
		printf("April has 30 days\n");break;

	case 5:
		printf("May\n");
		printf("May has 31 days\n");
		break;

	case 6:
		printf("june\n");
		printf("June has 30 days\n");break;

	case 7:
		printf("July\n");
		printf("July has 31 days\n");break;

	case 8:
		printf("August\n");
		printf("August has 31 days\n");break;

	case 9:
		printf("September\n");
		printf("September has 30 days\n");break;

	case 10:
		printf("October\n");
		printf("october has 31 days\n");break;

	case 11:
		printf("November\n");
		printf("November has 30 days\n");break;

	case 12:
		printf("December\n");
		printf("December has 31 days\n");break;
	default:
		printf("INVALID MONTH!!!\n");

	}
	system("pause");
}