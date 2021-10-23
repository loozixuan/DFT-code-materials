#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
#define PI 3.142
void diameterAreaCircum(int radius, double*diameter, double*area, double*circumference);

void diameterAreaCircum(int radius,double*diameter,double*area, double*circumference)
{
	*diameter = 2 * radius;
	*area = PI * radius * radius;
	*circumference = 2 * PI * radius;
}

int main()
{
	int radius;
	double d, a, c;

	printf("Enter radius:");
	scanf("%d", &radius);
	
	diameterAreaCircum(radius, &d, &a, &c);
	printf("Diameter=%.2f\nArea=%.2f\nCircumference=%.2f\n", d, a, c);
	system("pause");
}

