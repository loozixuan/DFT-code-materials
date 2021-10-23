#include<stdio.h>
#pragma warning(disable:4996)
//function prototype
void displaySquaresCubes(); 

//main program
void main()
{
	displaySquaresCubes();
	system("pause");
}

//function definition - content of the function
void displaySquaresCubes()
{
	printf("NUMBER\tSQUARE\tCUBE\n");
	printf("------\t------\t----\n");
	for (int i = 1; i < 11; i++)
	{
		printf("%d \t %d\t %d\n", i, i*i, i*i*i);
	}

}