#include<stdio.h>
#pragma warning(disable:4996)
void doTriangleArea();

void main()
{
	doTriangleArea();
	system("pause");

}

//function definition - content of the function
void doTriangleArea()
{
	int a, b;
	float area;
	//obtain from user length of 2 sides, a and b
	printf("Please Enter a: ");
	scanf("%d", &a);
	printf("Please enter b: ");
	scanf("%d", &b);

	area = 0.5*(float)a*(float)b; //calculate

	printf("The area is %.2f.", area); //display area
}