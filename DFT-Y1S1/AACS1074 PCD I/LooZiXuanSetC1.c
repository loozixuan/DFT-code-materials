#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)


void main()
{
	int radius;
	double area;

	printf("The radius of a circle :");
	scanf("%d", &radius);
	area = 3.14*radius*radius;
	printf("Area of the circle = %.2f ",area);
	system("pause");
}