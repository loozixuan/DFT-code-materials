#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()
{
	int day;
	printf("Value of day ");
	scanf("%d",&day);

	switch (day)
	{
	case 1:
		printf("Monday\n");break;
	case 2:
		printf("Tuesday\n");break;
	case 3:
		printf("wednesday\n");break;
	case 4:
		printf("Thursday\n");break;
	case 5:
		printf("Friday\n");break;
	case 6:
		printf("Saturday\n");break;
	case 0:
		printf("Sundaty\n");break;
	default:
		printf("INVALID DAY!!\n");
	}
	system("pause");
}