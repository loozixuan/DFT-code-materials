#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void main()
{
	int n1, n2, n3, n4, n5, total;
	float average;
	printf("Enter 5 integers > ");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

	total = n1 + n2 + n3 + n4 + n5;
	printf(" total = %d\n ", total);

	average = total / 5;
	printf("Average = %.2lf", average);



	system("pause");
}