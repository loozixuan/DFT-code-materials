#include<stdio.h>
#pragma warning(disable:4996);
int menu();

int main()
{
	int userChoice;
	userChoice = menu();
	printf(" This is my choice (%d)\n", userChoice);
	system("pause");
}

int menu()
{
	int choice;
	printf("The fast food Restaurant:\n1.KFC \n2.McDonalds \n3.Pizza Hut\n");
	scanf("%d", &choice);
	return choice;
}