#include<stdio.h>
#include<stdlib.h>
#include <math.h>

#pragma warning(disable : 4996)
void main()
{
	double x, y, num, result;

	printf("Enter value x > ");
	scanf("%lf", &x);
	printf("Enter value y > ");
	scanf("%lf", &y);

	num = x * y;
	result = log(num);
	printf("log(x power to y) = %.2lf\n",result);







	system("pause");

}