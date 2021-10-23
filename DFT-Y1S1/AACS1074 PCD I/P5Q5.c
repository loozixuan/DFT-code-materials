#include<stdio.h>
#include<ctype.h>
#pragma warning(disable:4996)

void main()
{
	char alpht;
	printf("Enter a character value > ");
	scanf("%c", &alpht);

	printf("Uppercase? %c \n", toupper(alpht));

	system("pause");
}