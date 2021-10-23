#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main()
{
	char question[20], answer[20],response[20];
	int count = 0, qno = 1, correct = 0;

	FILE*questionptr, *answerptr;
	questionptr = fopen("questions.txt", "r");
	answerptr = fopen("answers.txt", "r");

	if (questionptr == NULL || answerptr == NULL)
	{
		printf("Error in file");
		exit(-1);
	}

	printf("Hello! This is a quiz!\n");
	
	while (fscanf(questionptr, " %[^\n]\n", &question) != EOF)
	{
		count++; //count how many questions

		fscanf(answerptr, " %[^\n]\n", &answer);
        //put the question that you scan from txet file to screen
		printf("Q%d:   %s \n", qno, question);
		scanf("%[^\n]", &response);

		if (strcmp(answer, response) == 0)
		{
			printf("Correct! \n");
			correct++;
		}
		else
			printf("Wrong. Answer should be %s \n", answer);

		qno++;
	}

	printf("Number of correct answers = %d", correct);
	printf("Total number of questions = %d", count);
	printf("Your score       >>>>>>>>> %.2f", correct*100.0 / qno);

	fclose(questionptr);
	fclose(answerptr);

	system("pause");
}