#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int num, sum = 0,count=0;
	float average;
	//Declare file pointer, sum and average

	FILE* fptr,*resultptr;
	fptr = fopen("numbers.txt", "r");
	resultptr = fopen("result.txt", "w");  //create the text file

	if (fptr == NULL || resultptr==NULL)
	{
		printf("File does not exit.");
		exit(-1);
	}

	while (fscanf(fptr, "%d", &num)!=EOF)
	{
		sum += num;
		count++;
	}

	average = sum / count;

	/*display answer on cmd prompt

	printf("Total sum is %d and average is %.2f", sum,average);
	fclose(fptr);
	*/

	//display anwers in result.txt file
	fprintf(resultptr, "Sum=%d\n", sum);
	fprintf(resultptr, "Average=%.2f", average);
	printf("Process completed.....\n");
	fclose(fptr);
	fclose(resultptr);

	system("pause");
}