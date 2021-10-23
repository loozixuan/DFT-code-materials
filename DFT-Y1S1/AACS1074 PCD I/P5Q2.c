#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable:4996)
#define PI 3.14159

void main()
{
	double degree, radian;

	printf("Enter your angle x value in degree : ");
	scanf("%lf",&degree);

	radian = degree * (PI / 180.0);

	printf("sin x value is %.2lf\n", sin(radian));
	printf("tan x value is %.2lf\n", tan(radian));
	printf("cos x value is %.2lf\n", cos(radian));


	system("pause");
}