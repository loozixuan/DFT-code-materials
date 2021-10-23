#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()

{
	int n1, n2, n3;
	printf("Enter three integer:");
	scanf("%d %d %d", &n1, &n2, &n3);

	if (n1 <= n2 && n1 <= n3)
		printf("%d is the smallest integer\n", n1);

	else if (n2 <= n1 && n2 <= n3)
		printf("%d is the smallest integer\n", n2);

	else
		printf("%d is the smallest integer\n", n3);

	system("pause");
}