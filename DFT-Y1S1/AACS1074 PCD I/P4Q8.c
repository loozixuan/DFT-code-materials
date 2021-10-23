#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)

void main()
{
	int num, d1, d2, d3, d4;
	printf("Enter a 4-digit integer > ");
	scanf("%d", &num);

	d1 = num - 832;
	printf("%d\n", d1);

	d2 = num - 5032;
	printf("%d\n", d2);

	d3 = num - 5802;
	printf("%d\n", d3);

	d4 = num - 5830;
	printf("%d\n", d4);

	printf("%d = %d + %d + %d + %d", num, d1, d2, d3, d4);

	system("pause");
}