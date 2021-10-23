#include<stdio.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	//declaraction
	int number;
	float average;

	//initialization
	int sum = 0;
	int numberCount = 0;


	do 
	{
		printf("Enter a number>");
		scanf("%d", &number);

		sum = sum + number;
		numberCount = numberCount + 1;
		average = sum / numberCount;

	}
	
	while (number != -999); 
	{
		printf("%d is my sum\n", sum);
		printf("%d is the numberCount\n", numberCount);
		printf("%.3f is my average\n", average);
		
	}

	system("pause");

}