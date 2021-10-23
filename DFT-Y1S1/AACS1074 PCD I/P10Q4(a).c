#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()
{
	int num[10] = {8,12,18,4,25,25,25,25,30,28}, total=0;
	float percentage[10],totalPercent=0;
	char percent = '%';


	printf("    n           %c of total\n",percent);
	printf("   ---          -----------\n");
	for (int i = 0;i < 10;i++)
	{
		printf("   %d \t\t", num[i]);
		percentage[i] = (float)num[i] / 2;
		printf("%.2f%c\n", percentage[i],percent);
		total += num[i];
		totalPercent += percentage[i];
	}
	printf("   ---          -----------\n");

	printf("Total = %d    %.2f%c\n", total,totalPercent, percent);


	system("pause");
}