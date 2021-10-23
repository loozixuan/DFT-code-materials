#include<stdio.h>
#include<stdlib.h>
#include <math.h>

#pragma warning(disable : 4996)
void main()
{
	double x, y, squareRoot;

	printf("Enter value x > ");
	scanf("%lf", &x);
	printf("Enter value y > ");
	scanf("%lf", &y);

	squareRoot = sqrt(x)*sqrt(y);
	printf("Square root of is %.2lf\n", squareRoot);





	system("pause");

}