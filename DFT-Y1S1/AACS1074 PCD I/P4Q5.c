#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	float num,fractional;
	int x;


	printf("Enter a floating-number > ");
	scanf("%f", &num);
    x = (int)num;
    printf("Its integral part :%d\n",x);

	fractional = num - x;
	printf("Its fractional part :%.6f\n", fractional);

	system("pause");
}