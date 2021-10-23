#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)

void main()
{
	int num, d1, d2, d3, d4;
	printf("Enter a 4-digit integer > ");
	scanf("%d", &num);

	d1 = num /1000;
	printf("1st digit :%d \n", d1);

	d2 = num / 100 % 10;
	printf("2nd digit :%d \n", d2);

	d3 = num /10 - 580;
	printf("3rd digit :%d \n", d3);

	d4 = num %10;
	printf("4th digit :%d", d4);

	system("pause");
}