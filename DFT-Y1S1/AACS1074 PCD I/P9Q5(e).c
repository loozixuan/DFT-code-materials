#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

void main()
{

	int num[30], sum = 0, countEven = 0;
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		num[i] = -50 + rand() % 100;
		printf("num[%d]=%d", i, num[i]);
		if (num[i] % 2 == 0)
			countEven++;

	}
	printf("\n");
	for (int i = 10; i < 20; i++)
	{
		num[i] = -50 + rand() % 100;
		printf("num[%d]=%d", i, num[i]);
		if (num[i] % 2 == 0)
			countEven++;


	}
	printf("\n");
	for (int i = 20; i < 30; i++)
	{
		num[i] = -50 + rand() % 100;
		printf("num[%d]=%d", i, num[i]);
		if (num[i] % 2 == 0)
			countEven++;


	}
	printf("\nTotal even number is %d\n", countEven);

	system("pause");
}