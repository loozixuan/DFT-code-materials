include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)
void main()
{
	char name1[15];
	char name2[10];
	float sales;

	printf("Enter staff name > ");
	gets(name1);
	printf("Enter sales amount > ");
	rewind stdin;
	scanf("%5.2f", &sales);



	printf("Enter staff name > ");
	rewind stdin;
	gets(name2);
	printf("Enter sales amount > ");
	rewind stdin;
	scanf("%5.2f", &sales);

	system("pause");

}