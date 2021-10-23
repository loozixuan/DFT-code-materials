#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#pragma warning(disable:4996)
void rootsFx(int a, int b, int c, double*x1, double*x2);

void rootsFx(int a, int b, int c, double*x1, double*x2)
{
	*x1 = (-b + sqrt(pow(b, 2) - 4 * a*c)) / (2 * a);
	*x2 = (-b - sqrt(pow(b, 2) - 4 * a*c)) / (2 * a);
}

int main()
{
	int a = 2, b = -5, c = -3;
	double numX1, numX2;
	rootsFx(a, b, c,&numX1,&numX2);
	printf("The answers is %.2f and %.2f", numX1, numX2);
	system("pause");
}