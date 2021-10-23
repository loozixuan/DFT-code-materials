#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void printArray(char arrName[], int arr[], int size);
int totalArray(const int arr[], int size);

void printArray(char arrName[], int arr[], int size)
{
	//display the name of the array
	printf("Name of the array: %s\n", arrName);
	//display contents of the array
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", arr[i]);
	}
}

int totalArray(const int arr[], int size) {
	int total = 0;

	for (int i = 0; i < size; i++)
		total += arr[i];

	return total;
}

void getArray(int arr[], int size)
{
	printf("Key in array element: ");
	for (int i = 0; i < size; i++)
	{
		printf("Array[%d]: ", i);
		scanf("%d", &arr[i]);
	}
}

int main()
{
	int myArray[10];
	getArray(myArray, 10);
	printArray("myArray", myArray, 10);
	printf("Array Total = %d\n", totalArray(myArray, 10));
	
	system("pause");
}