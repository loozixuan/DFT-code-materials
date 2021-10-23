#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
#define PI 3.14159
void displayCircleInfo();
void welcome();

void main()
{
	welcome();
	displayCircleInfo();
	system("pause");

}

void displayCircleInfo()
{
	int radius;
	float diameter,circumstances, area;
	printf("Enter radius: ");
	scanf("%d", &radius);

	diameter = 2 * radius;
	circumstances = 2 * PI* (float)radius;
	area = PI*pow((float)radius, 2);

	printf("Diameter= %.2f\nCircumstances= %.2f\nArea=%.2f\n", diameter, circumstances, area);
}

void welcome()
{
	printf("WELCOME                          *  *\n");
	printf("This program will calculate    *      *\n");
	printf("a circle’s diameter,           *      *\n");
	printf("circumference and area.          *  *\n\n");

}