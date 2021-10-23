#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void converterTime(int seconds, int*hr, int*min, int*sec);

void converterTime(int seconds, int*hr, int*min, int*sec)
{
	*hr = seconds / 3600;
	*min = seconds % 3600 / 60;
	*sec = seconds % 60;
}

int main()
{
	int seconds,hrs, mins, secs;
	printf("Enter seconds: ");
	scanf("%d", &seconds);
	converterTime(seconds, &hrs, &mins, &secs);
	printf("%dhr%dmin%dsec\n",hrs,mins,secs);
	system("pause");
}