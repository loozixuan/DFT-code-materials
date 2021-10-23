#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

void main()
{
	int arrNum[31];
	int num;
	srand(time(NULL));

	for (int i = 0;i < 31;i++)
	{
		arrNum[i] = -50 + rand() % 100;
	}

	for (int i = 0;i < 31;i++)
	{
		if (i % 2 != 0)
		{
			printf(" arrNum[%d]=%d ", i, arrNum[i]);
			if ((i + 1) % 10 == 0)
				printf("\n");
		}
	}

	system("pause");
}