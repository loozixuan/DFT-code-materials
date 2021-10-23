#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()
{

	int numSummonses, age;
	printf("Number of summonses is ");
	scanf("%d", &numSummonses);
	printf("The driver's age is ");
	scanf("%d", &age);

	if (numSummonses == 0 && age > 30)
		printf("He is low-risk driver\n");
	else if(numSummonses > 2 && age < 30)
		printf("He is very high-risk driver\n");
	else
		printf("He is a high-risk driver.\n");

	system("pause");
}