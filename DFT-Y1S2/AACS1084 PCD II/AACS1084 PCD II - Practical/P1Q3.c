#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

struct TIME
{
	int hours, minutes;
}current,nexMin;

void main()
{
	printf("Current Time in hours  :");
	scanf("%d", &current.hours);
	printf("Current Time in minute :");
	scanf("%d", &current.minutes);


	if (current.hours > 12)
	{
		current.hours -= 12;
	}
		nexMin.hours = current.hours;
		nexMin.minutes = current.minutes+1;

	if (nexMin.minutes > 59)
	{
		nexMin.hours += 1;
		
		if (nexMin.hours > 12)
		{
			nexMin.hours -= 12;
		}
		nexMin.minutes -= 60;
	}

	printf("It is now %d:%02d, Next minutes it will be %d:%02d \n", current.hours,current.minutes,nexMin.hours, nexMin.minutes);
	system("pause");
}