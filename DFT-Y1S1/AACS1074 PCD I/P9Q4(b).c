#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()
{
	int num[20] , total = 0;
	float percentage[20], totalPercent = 0;
	char percent = '%';
	
	for (int i = 0;i < 20;i++)
	{
		printf("num[%d]: ",i);
		scanf("%d", &num[i]);
		total += num[i];
	}
	
	printf("    n          %c of total\n", percent);
	printf("   ---         -----------\n");
	for (int i = 0;i < 20;i++)
	{
		printf("   %d \t\t", num[i]);
		percentage[i] = ((num[i] / (float)total))*100;
		printf("%.2f%c\n", percentage[i],percent);
		totalPercent += percentage[i];
		
	}
	printf("   ---        -----------\n");

	printf("Total = %d    %.2f%c\n", total, totalPercent,percent);


	system("pause");
}