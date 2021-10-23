#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#pragma warning(disable:4996)

typedef struct
{
	char ProdCode[6];
	int year;
	char country[26];
}Product;

int main()
{
	char answer;
	Product prod;

	FILE*fp;
	fp = fopen("product.dat", "ab");
	if (fp == NULL)
	{
		printf("Error in the file!");
		exit(-1);
	}

	printf("Add product? y-yes,n-no:");
	scanf("%c", &answer);

	while (toupper(answer) == 'Y')
	{
		printf("Enter Product Code:");
		scanf("%s", prod.ProdCode);

		printf("Expiry Year:");
		scanf("%d", prod.country);

		printf("Enter a country:");
		rewind(stdin);
		scanf("%[^\n]", prod.country);

		//write information to binary file
		fwrite(&prod, sizeof(Product), 1, fp);

		printf("Add product? y-yes,n-no:");
		rewind(stdin);
		scanf("%c", &answer);
	}
	fclose(fp);

	system("pause");
}