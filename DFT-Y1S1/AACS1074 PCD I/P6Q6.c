#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()
{
	int monthlySales=0;
	float income;
	int basicPay;
	float rate;

	printf("Mountly Sales: ");
	scanf("%d", &monthlySales);

	if (monthlySales >= 50000)
	{
		basicPay = 375;
		rate = 0.16;
	}
	else if (monthlySales < 50000 && monthlySales >= 40000)
	{
		basicPay = 350;
		rate = 0.14;
	}
	else if (monthlySales < 40000 && monthlySales >= 30000)
	{
		basicPay = 325;
		rate = 0.12;
	}
	else if (monthlySales < 30000 && monthlySales >= 20000)
	{
		basicPay = 300;
		rate = 0.09;
	}
	else if (monthlySales < 20000 && monthlySales >= 10000)
	{
		basicPay = 250;
		rate = 0.05;
	}
	else
	{
		basicPay = 200;
		rate =0.03;
	}

	income = basicPay + rate * monthlySales;
	printf("Income is RM%.2f\n", income);

	system("pause");
}