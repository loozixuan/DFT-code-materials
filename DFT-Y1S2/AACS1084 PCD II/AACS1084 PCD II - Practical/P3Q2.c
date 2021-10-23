#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#pragma warning (disable:4996)

void main()
{
	int charCount = 0, letterCount = 0, vowelCount = 0, consonentCount = 0, blankCount = 0;
	char ch;
	FILE*fptr;
	fptr = fopen("text.txt", "r");

	if (fptr == NULL)
	{
		printf("File does not exist.");
		exit(-1);
	}

	while (fscanf(fptr, "%c", &ch) != EOF)
	{
		charCount++;
		if (ch == ' ')
		{
			blankCount++;
		}
		else
		{
			ch = toupper(ch);
			if (isalpha(ch)) // to check whether it is a alphabet or not
			{
				letterCount++;
				if (ch == 'A' || ch == 'E' || ch=='I'||ch == 'O' || ch == 'U')
					vowelCount++;
				else
					consonentCount++;
			}
		}

	}

	//display your anwers on command prompt

	printf("Total number of characters : %d\n", charCount);
	printf("Number of letters          : %d\n", letterCount);
	printf("Number of vowels           : %d\n", vowelCount);
	printf("Number of consonants       : %d\n", consonentCount);
	printf("Number of blanks (spaces)  : %d\n", blankCount);
	printf("Approx no. of words        : %d\n", ch);

	fclose(fptr);
	system("pause");
}