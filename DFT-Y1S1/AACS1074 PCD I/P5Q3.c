#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)

void main()
{
	double x1, x2, y1, y2;
	double distance;

	printf("Enter value x1 > ");
	scanf("%lf", &x1);
	printf("Enter value x2 > ");
	scanf("%lf", &x2);
	printf("Enter value y1 > ");
	scanf("%lf", &y1);
	printf("Enter value y2 > ");
	scanf("%lf", &y2);

	distance = sqrt((pow(x1 - x2, 2)) + (pow(y1 - y2,2)));
	printf("The distance is %.2lf unit\n",distance);

	system("pause");

}