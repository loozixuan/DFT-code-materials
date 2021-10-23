#include <stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
#define MAXIMUM_LOAN_PERIOD 14
#define FINE_RATE 0.20
void main()
{
	double amountFined;
	int books, loan, days ;


	printf("Enter the number of books : ");
	scanf("%d", &books);

	printf("Enter the days of the loan : ");
	scanf("%d", &loan);

	days = loan - MAXIMUM_LOAN_PERIOD ; 
	printf("Days overdue : %d.\n", days);

	amountFined = days * books * FINE_RATE ;
	printf("Fine : RM%.2f\n.", amountFined);
	



	system("pause");
}