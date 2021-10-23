#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

void main()
{

	int num[30], sum = 0,smallest,location;
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		num[i] = -50 + rand() % 100;
			printf("num[%d]=%d ", i, num[i]);


	}
	printf("\n");
	for (int i = 10; i < 20; i++)
	{
		num[i] = -50 + rand() % 100;
			printf("num[%d]=%d ", i, num[i]);

	}
	printf("\n");
	for (int i = 20; i < 30; i++)
	{
		num[i] = -50 + rand() % 100;
			printf("num[%d]=%d ", i, num[i]);

	}

	smallest = num[0];
	for (int i = 1; i < 30; i++)
	{
	
		if (num[i] < smallest)
		{
			smallest = num[i];
			location = i;
		}
	}
	printf("\nThe smallest value is %d and location is at %d\n", smallest,location);
	system("pause");
}