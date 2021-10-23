#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()
{
	int  minutes,hours;
	float payment;

	printf("Hours used by user : ");
	scanf("%d", &hours);


	printf("Minutes used by user : ");
	scanf("%d", &minutes);

	//calculate the payment
	payment = (hours*3) + (minutes*(3.00/60));

	printf("The payment is RM%.2f", payment);



	system("pause");
}