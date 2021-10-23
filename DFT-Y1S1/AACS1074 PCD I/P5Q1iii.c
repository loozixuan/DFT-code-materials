#include<stdio.h>
#include<stdlib.h>
#include <math.h>

#pragma warning(disable : 4996)
void main()
{
	double x, y, result;

	printf("Enter value x > ");
	scanf("%lf", &x);
	printf("Enter value y > ");
	scanf("%lf", &y);

	result = pow(x, y);
	printf("power of y to x is %.2f\n", result);

	





	system("pause");

}