#include<stdio.h>
#include<stdlib.h>
#include <math.h>

#pragma warning(disable : 4996)
void main()
{
	double x, y, num, squareRoot;

	printf("Enter value x > ");
	scanf("%lf", &x);
	printf("Enter value y > ");
	scanf("%lf", &y);

	num = x*y;
	squareRoot = sqrt(num);
	printf("Square root of %.2lf is %.2lf\n", num, squareRoot);





	system("pause");

}