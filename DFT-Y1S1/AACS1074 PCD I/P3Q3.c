#include <stdio.h>
#include<stdlib.h>
#pragma warning (disable : 4996)
void main()
{
	char name[15];
	int  age;
	char gender;
	float income;

	printf("Enter<name> <age> <gender> <income>:");
	scanf("%s %d %c %f", &name, &age, &gender, &income);

	printf("Name   :%s\n", name);
	printf("Age    :%d\n", age);
	printf("Gender :%c\n", gender);
	printf("Income :%.2f\n", income);

	system("pause");


}
