#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void main()
{
	int num,d1,d2,d3,d4;
	printf("Enter a 4-digit integer > ");
	scanf("%d", &num);

	d1 = num %10;
	printf("%d\n",d1);

	d2 = num %100;
	printf("%d\n", d2);

	d3 = num %1000;
	printf("%d\n", d3);

	d4 = num;
	printf("%d", d4);


	system("pause");
}