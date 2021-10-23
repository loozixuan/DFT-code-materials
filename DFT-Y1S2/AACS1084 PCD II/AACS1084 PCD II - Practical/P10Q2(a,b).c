#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)
int convertDay(int day, char* dayName);

int convertDay(int day, char* dayName)
{
	int r = 1;

	switch (day)
	{
	case 0: strcpy(dayName, "Sunday"); break;
	case 1: strcpy(dayName, "Monday"); break;
	case 2: strcpy(dayName, "Tuesday"); break;
	case 3: strcpy(dayName, "Wednesday"); break;
	case 4: strcpy(dayName, "Thursday"); break;
	case 5: strcpy(dayName, "Friday"); break;
	case 6: strcpy(dayName, "Saturday"); break;
	default: strcpy(dayName, "???"); break; r = 0;
	}

	return r;
}

int main()
{
	int today,tommorow;
	char todayName[10], tommorowName[10];

	printf("What is today day number (0->Sunday - 6->Saturday)?");
	scanf("%d", &today);
	tommorow = today + 1;

	if (tommorow == 7)
		tommorow = 0;

	if (convertDay(today, &todayName) == 0)
		printf("Invalid day!");
	else
	{
		convertDay(tommorow, &tommorowName);
		printf("Today is %s, tommorow will be %s", todayName, tommorowName);
	}

	system("pause");
}