#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()
{
	int num;
	printf("Enter a integer>");
	scanf("%d", &num);

	if (num % 2 == 0 && num!=0)
		printf("It is an even number.\n");
	else if (num == 0)
		printf("It is zero.\n");
	else
		printf("It is an odd number.\n");

	system("pause");
}