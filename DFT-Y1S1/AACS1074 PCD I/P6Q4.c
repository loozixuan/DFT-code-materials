#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()
{
	int hourWrk;
	float paid1 = 6.00, paid2 = 9.00, pay;

	printf("Hours of work:");
	scanf("%d", &hourWrk);

	if (hourWrk <= 40)
	{
		pay = hourWrk * paid1;
		printf("RM%.2f\n", pay);
	}
	else if (hourWrk > 40)
	{
		pay = (40* paid1)+((hourWrk-40) * paid2);
		printf("RM%.2f\n", pay);
	}

	

	system("pause");
}