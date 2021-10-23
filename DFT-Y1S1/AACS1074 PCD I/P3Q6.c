#include <stdio.h>
#include<stdlib.h>

void main()
{
	int n;

	printf("Enter an integer > ");
	rewind(stdin);
	scanf_s("%d", &n);

	printf("\n");

	printf("Decimal     : %d\n", n);
	printf("Octal       : %o\n", n);
	printf("Hexadecimal : %x\n", n);
	printf("Hexadecimal : %X\n", n);

	system("pause");




}