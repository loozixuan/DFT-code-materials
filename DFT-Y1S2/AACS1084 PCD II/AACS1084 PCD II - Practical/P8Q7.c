#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)
void additionQuiz(int level, int *correct, double *score);

int main()
{

	//ask what level of quiz
	//call the function
	//display correct and score
	int level, correct=0;
		double score;
	printf("What level you want?");
	scanf("%d", &level);

	//call the function
	additionQuiz(level,&correct,&score);

	//display correct and score
	printf("You got %d correct answers out of 5 questions.\n", correct);
	printf("Score : %.2f\n", score * 100);
	system("pause");
}

void additionQuiz(int level, int *correct, double *score)
{
	srand(time(NULL));
	int x, y,ans;
	for (int i = 1; i < 6; i++)
	{
		x = rand() % (level*20) + 1;
		y= rand() % (level * 20) + 1;

		printf("Q%d:%d + %d = ", i, x, y); //display question on screen
		scanf("%d", &ans); //get user input

		if (ans == x + y)
		{
			printf("Correct!pannai\n");
			(*correct)++;
		}
		else
			printf("Wrong,stupid le you.\n");
	}

	*score = *correct / 5.0;

}
