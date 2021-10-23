#include <stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)
#define PI 3.14159
void main()

{
	double area, circumference, radius;
	printf("Enter the radius > ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	circumference = 2 * PI * radius;
	printf("Area = %.2f\n", area);
	printf("Circumference = %.2f\n", circumference);

	system("pause");

}