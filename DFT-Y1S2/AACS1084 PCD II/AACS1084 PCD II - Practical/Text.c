#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)

typedef struct {
	int day, mouth, year;
}Date;

typedef struct {
	char iDNum[5], name[20];
	Date dateOfBirth;
}Student;

void getDOB(Date *d)
{
	printf("Enter your date of birth -->\n");

	printf("Enter Day: ");
	rewind(stdin);
	scanf("%d", &d->day);

	printf("Enter month: ");
	rewind(stdin);
	scanf("%d", &d->mouth);

	printf("Enter Year: ");
	rewind(stdin);
	scanf("%d", &d->year);

}

void getStudentRec(Student *s)
{
	printf("Student ID: ");
	rewind(stdin);
	scanf("%s", &s->iDNum);

	printf("Enter Name: ");
	rewind(stdin);
	scanf("%s", &s->name);

	getDOB(&(s->dateOfBirth));
}

int main()
{
	Student s;
	int count = 0;
	char cont;
	FILE*fp;
	fp = fopen("CSstudents.txt", "w");
	if (fp = NULL)
	{
		printf("Error inopening file.");
		exit(-1);
	}

	do {
		getStudentRec(&s);
		count++;
		fprintf(fp, "%s %s %d-%d-%d\n", s.iDNum, s.name, s.dateOfBirth.day, s.dateOfBirth.mouth, s.dateOfBirth.year);

		printf("AnyMOre? ");
		rewind(stdin);
		scanf("%c", &cont);

	} while (toupper(cont) == 'Y');

	printf("%d record(s) saved.\n", count);

	fclose(fp);
	system("pause");
}