#include<stdio.h>
#include<time.h>
#pragma warning(disable : 4996)

void main()
{
	char a;
	int num;
	printf("Hi everybody, welcome to this system\n");
	printf("This is a lucky draw system\n");
	printf("You can try\n");
	printf("typing A to get number between 0-20\n");
	printf("typing B to get number between 21-40\n");
	printf("-->\n");
	scanf("%c", &a);
	srand(time(NULL));

	if (a=='a')
	{
		printf("You have entered A\n");
		printf("Your range of input will stay between 0-20\n ");
		num = rand() % 21;
		printf("Your number is %d\n",num);
	
		if (num <= 10 )
		{
			printf("It is less than or equal to 10\n");
		}
		else
		{
			printf("It is more than 10\n");
		}
	}

	else
	{
		printf("You have entered b\n");
		printf("Your range input will be stay between 21-40\n");
		num = rand() % 20 + 21;
		printf("Your number is %d\n",num);
	
		if (num <= 30)
		{
			printf("It is less than or equal to 30\n");
		}
		else
		{
			printf("It is more than 30");
		}

	}
	system("pause");
}