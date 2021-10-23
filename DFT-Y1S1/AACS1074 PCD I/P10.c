#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#pragma warning(disable:4996)
char convertAlphbt(char alphabet);

int main()
{
	char alphabet;
	printf("Enter a alphabet> ");
	scanf("%c", &alphabet);

	alphabet = convertAlphbt(alphabet);
	printf("%c\n", alphabet);
	
	system("pause");
}

char convertAlphbt(char alphabet)
{
	char alphabt;
	alphabt = toupper(alphabet);
	return alphabt;
}