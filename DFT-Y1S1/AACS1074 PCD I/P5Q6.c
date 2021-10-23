#include<stdio.h>
#pragma warning(disable:4996)

//function declaration
void myName();
void myAddress();

void main()
{
	//function call
	myName();
	myAddress();
}

//function definition
void myName()
{
	printf("My Name is John.\n");
}

void myAddress()
{
	printf("My Adrress is 34 Jalan Pisang,44300 Kuala Lumpur.\n");
	system("pause");
}