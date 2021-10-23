#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int getRandomNumber(int min, int max);
int getmark();
#pragma warning(disable:4996)

void main() {
	char singleName[8] = "Aladdin", mutipleName[32];
	int mark1, randomNum;

	printf("Hi %s,I will generate mark for your friend\n", singleName);
	printf("Let's enter a name for your friend >>");
	scanf("%[^\n]", mutipleName);
	rewind(stdin);
	printf("Your friend is %s\n", mutipleName);
	randomNum = getRandomNumber(3, 12);
	printf("random number is %d\n", randomNum);
	mark1 = getmark();
	printf("input mark is %d\n", mark1);
	printf("Your Output Status is:\n");
	


	switch (randomNum)
	{
	case 3:
	case 4:
	case 5:
		if (mark1 >= 10)
		{
			printf("Normal only\n", mark1);
		}
		else {
			printf("You're bad\n", mark1);
		}
		break;
	case 6:
	case 7:
	case 8:
		if (mark1 >= 0)
		{
			printf("That's positive!", mark1);
		}
		else {
			printf("Oh no,it's negative!", mark1);
		}
		break;
	case 9:
	case 10:
	{

		printf("Nothing will happen: )", mark1);
	}
	break;
	default:
	{
		if (mark1 == 11 || mark1 == 12)
			printf("Congratulations,you made it!", mark1);
	}

	}


	system("pause");

}

int getRandomNumber(int min, int max)
{
	double random;
	srand(time(NULL));
	random = rand() % ((max)+1) - min;
	return random;

}

int getmark()
{
	int mark;
	printf("Now enter a mark for your friend>>");
	scanf("%d", &mark);
	return mark;
}


