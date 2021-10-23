#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
#define INTEREST_RATE 0.075
#define INTEREST_RATE2 0.054

void main()
{
	int numYrs;
	printf("How many years the money is left in bank?\n");
	scanf("%d", &numYrs);

	if (numYrs > 5)
		printf("Interest rate is %.3f\n", INTEREST_RATE);
	else
		printf("Interest rate is %.3f\n", INTEREST_RATE2);



	system("pause");
}