#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
float triangleArea();

float main()
{
	double area1;
	area1 = triangleArea(); // store the returned value into a variable

	printf("Area of 1st triangle = %.2f\n\n", area1); // display theresult.

    // display the result directly without storing into a variable.
    printf("Area of 2nd triangle = %.2f\n\n", triangleArea());

	system("pause");
}

//function definition - content of the function
float triangleArea()
{
	float area;
	int a, b;
	printf("Enter sides a: ");
	scanf("%d", &a);
	printf("Enter sides n:");
	scanf("%d", &b);

	area = 0.5*(float)a*(float)b;
	return area;
}

