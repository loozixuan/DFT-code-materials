#include<stdio.h>
#pragma warning(disable:4996)
void displayRecords();


void displayRecords()

{
	char name[30];
	int marks,count=0;

	FILE*fptr;
	fptr = fopen("mixed.txt", "r");

	if (fptr == NULL)
	{
		printf("File does not exit.");
		exit(-1);
	}

	printf("LIST OF RECORD - mixed.txt\n");
	printf("Name\t\t Mark\n");
	printf("=== \t\t ===\n");

	while (fscanf(fptr, "%[^\n] &d\n", &name, &marks) != EOF)
	{
		printf("%s \t\t %d\n", name, marks);
		count++;
	}

	printf("Number of records = %d\n", count);

	fclose(fptr);
}

void main()
{
	displayRecords();

	system("pause");
}