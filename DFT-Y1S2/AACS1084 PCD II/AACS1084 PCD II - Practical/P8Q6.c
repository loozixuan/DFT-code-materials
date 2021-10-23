#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
#define THISYEAR 2019
# define THISMONTH 12
void age(int monthBorn, int yearBorn, int *ageYrs, int *ageMths);

int main()
{
	int year, month,age_in_years,age_in_months;
	printf("Enter year of birth: ");
	scanf("%d", &year);

	printf("Enter month of birth: ");
	scanf("%d", &month);

	age(month, year, &age_in_years, &age_in_months);

	//display age in years and age in months
	printf("Age is year is %d\n",age_in_years);
	printf("Age in months is %d\n", age_in_months);
	system("pause");
}

void age(int monthBorn, int yearBorn, int *ageYrs, int *ageMths)
{
	*ageYrs = THISYEAR - yearBorn;
	if(THISMONTH>=monthBorn)
	*ageMths = THISMONTH - monthBorn;
	else
	{
		(*ageYrs)--;
		*ageMths = 12 + THISMONTH - monthBorn;
	}

}