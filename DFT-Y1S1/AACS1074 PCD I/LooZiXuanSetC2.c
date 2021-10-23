#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()
{
	int R[5] = { 2,3,4,5,6 };
	float A[5];

	printf("Radius           Area\n");
	printf("-----------------------\n");
	for (int i = 0; i < 5; i++)
	{
		printf("   %d", R[i]);
		A[i] = (float)3.14*R[i] * R[i];
		if(A[i]>100)
		printf("               %.2f*\n", A[i]);
		else
			printf("               %.2f\n", A[i]);
	}
	printf("\n");
	system("pause");
}