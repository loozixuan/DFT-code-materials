#include<stdio.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	//declaraction
	int number;


	//initialization
	int sum = 0;
	int numberCount = 0;

	printf("Enter a number> ");
	scanf("%d", &number);


	while (number != -999)
	{
		
		sum = sum + number;
		numberCount = numberCount + 1;

		printf("Enter a number> ");
		scanf("%d", &number);

	} 

	printf("%d is my sum\n", sum);
	printf("%d is the numberCount\n", numberCount);
	printf("%.3f is my average\n", (float)sum / numberCount);



	system("pause");

}