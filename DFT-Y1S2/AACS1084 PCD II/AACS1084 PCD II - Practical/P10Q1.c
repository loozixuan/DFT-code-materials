#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void printArray(char arrName[], int arr[], int size);

void printArray(char arrName[], int arr[], int size)
{
	//display the name of the array
	printf("Name of the array: %s", arrName);
	//display contents of the array
	for (int i = 0; i < size; i++)
	{
		printf("\n%d\n", arr[i]);
	}
}

int main()
{
	int myArray[5] = {1,2,3,4,5};
	printArray("myArray", myArray, 5);

	system("pause");
}