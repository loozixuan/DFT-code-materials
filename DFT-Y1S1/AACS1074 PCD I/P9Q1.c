#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()
{
	int bArray[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)

	{
		printf("%d\n", bArray[i] + 10);
	}
	system("pause");
}