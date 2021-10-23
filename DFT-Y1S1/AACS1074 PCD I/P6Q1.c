#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()
{
	int num;
	printf("Enter a integer:");
	scanf("%d", &num);

	if (num % 3 == 0)
		printf("It is mutiple of 3\n");
	else
		printf("It is not mutiple of 3\n");
	system("pause");
}