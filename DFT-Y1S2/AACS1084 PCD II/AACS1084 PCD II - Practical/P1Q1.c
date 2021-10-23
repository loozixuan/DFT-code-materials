#include<stdio.h>
#pragma warning(disable:4996)

struct Attendance {
	char studentName[40];
	char programmeCode[5];

	// global structure

	int yearOfStudy;
	int groupNo;
	int daysAbsent;
};

void main()
{
	//structure variable - local
	struct Attendance att;
	strcpy(att.studentName, "Tan Ah Kow");
	strcpy(att.programmeCode, "DIA1");
	att.yearOfStudy=2019;
	att.groupNo=02;
	att.daysAbsent=0;

	printf("Name\t\tProgramme\tGroup\t  Day absent\tAction\n");
	printf("%s\t", att.studentName);
	printf("%s\t\t", att.programmeCode);
	printf("%d\t\t", att.groupNo);
	printf("%d\t", att.daysAbsent);

	if (att.daysAbsent > 0 || att.daysAbsent < 3)
		printf("warning to student\n");
	else if (att.daysAbsent > 2 || att.daysAbsent < 5)
		printf("inform parents\n");
	else
		printf("Bar from exam\n");

	system("pause");
}