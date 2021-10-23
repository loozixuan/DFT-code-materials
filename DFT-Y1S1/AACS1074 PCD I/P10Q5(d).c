#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

void main()
{
	int arrNum[31];
	int num;
	int countEven=0;
	srand(time(NULL));

	for (int i = 0;i < 31;i++)
	{
		arrNum[i] = -50 + rand() % 100;
	}

	for (int i = 0;i < 31;i++)
	{
		if (arrNum[i] % 2 == 0)
		{
			printf(" arrNum[%d]=%d ", i, arrNum[i]);
			countEven++;
		}
	}
	printf("\n");
	printf("Total even number is %d\n", countEven);

	system("pause");
}