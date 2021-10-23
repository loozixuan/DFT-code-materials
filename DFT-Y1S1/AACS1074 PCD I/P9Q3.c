#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()
{
	int arrX[10] = { 3,5,-1,0,-10,4,7,-9,1,3 };
	int arrY[10] = { 0,2,4,6,-1,8,4,6,-2,2 };
	int prodXY[10];

	printf("Numbers of arrX are:");
	for (int i = 0;i < 10;i++)
		printf(" %d ", arrX[i]);
	
	printf("\n");
	printf("Numbers of arrY are:");
	for (int i = 0;i < 10;i++)
		printf(" %d ", arrY[i]);

	printf("\n");
	for (int i = 0;i < 10;i++)
	    prodXY[i] = arrX[i] * arrY[i];

	printf("\n");
	printf("Numbers of arrY are:");
	for (int i = 0;i < 10;i++)
        printf(" %d ", prodXY[i]);



	system("pause");
}