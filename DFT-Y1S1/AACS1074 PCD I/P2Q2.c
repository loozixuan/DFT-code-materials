#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)
#define MAX_SIZE 20
void displayAll();
void search();
void viewRecord();
void editRecord();
void addRecord();

struct Date
{
	int day, month, year;
};

typedef struct
{
	char employeeID[4], name[20];
	struct Date dateJoined;
	char department[15];
}Employee;

Employee emp[MAX_SIZE] = { { "E01","Alice Chin",{ 5,12,2008 },"R&D" },{ "E02","John",{ 9,12,2011 },"IT" },{ "E03","Vivian",{ 3,3,2015 },"HR" },{ "E04","Alice Chin",{ 4,4,2011 },"IT" },{ "E05","Vivien Tan",{ 5,3,2015 },"HR" } };
int searchMonth, searchYear, num,count=0,found=0;
char searchID[5],cont;
char answer, employeeId[5];
int nEmployees = 5;

void main()
{
	int choice;
	Employee emp[MAX_SIZE] = { { "E01","Alice Chin",{ 5,12,2008 },"R&D" },{ "E02","John",{ 9,12,2011 },"IT" },{ "E03","Vivian",{ 3,3,2015 },"HR" },{ "E04","Alice Chin",{ 4,4,2011 },"IT" },{ "E05","Vivien Tan",{ 5,3,2015 },"HR" } };
	displayAll();
	printf("\n\nEmployee Menu \n ===========\n");
	printf("1.  Search Employee\n");
	printf("2.  View Employee\n"); 
	printf("3.  Edit Employee\n");

	printf("Enter choice:");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		search(); break;
	case 2:
		viewRecord(); break;
	case 3:
		editRecord(); break;
		
	}
	system("pause");
}

void displayAll()
{
	printf("Employee Details\n");
	printf("----------------\n");
	printf("\nEmployee ID      Name          Date Joined          Department\n");
	for (int i = 0; i < nEmployees; i++)
	{
		printf("%s  %18s        %2d/%2d/%d %17s\n", emp[i].employeeID, emp[i].name, emp[i].dateJoined, emp[i].department);
		count++;
	}
	printf("Record:%d", count);
}

void search()
{
	printf("\n\nEnter particular month >");
	scanf("%d", &searchMonth);
	printf("Enter particular year >");
	scanf("%d", &searchYear);

	for (int i = 0; i < nEmployees; i++)
	{
		if (searchMonth == emp[i].dateJoined.month && searchYear == emp[i].dateJoined.year)
			printf("Employee Name: %s\n", emp[i].name);
	}
}

void viewRecord()
{
	printf("\n\nEnter ID of Employee to view : ");
	scanf("%s", &searchID);
	do
	{
		for (int i = 0; i < nEmployees; i++)
		{
			if (strcmp(searchID, emp[i].employeeID) == 0)
			{
				found = 1;
				printf("Employee ID : %s\n", emp[i].employeeID);
				printf("Name        : %s\n", emp[i].name);
				printf("Date Joined : %02d-%2d-%d\n", emp[i].dateJoined.day, emp[i].dateJoined.month, emp[i].dateJoined.year);
				printf("Department  : %s\n", emp[i].department);
			}
		}
			if(found == 0)
			{
				printf("Employee not found!\n");
			}
			printf("Do you want to continue?");
			rewind(stdin);
			scanf("%c", &cont);
		
	}while (cont == 'y' || cont == 'Y');
}

void editRecord()
{
	char editId,confirm;
	int i = 0, editIndex;
	Employee temp;

	editIndex = -1;
	printf("\nENTER EMPLOYEE'S ID TO EDIT >");
	rewind(stdin);
	scanf("%s", &editId);

	while (i < nEmployees && editIndex == -1)
	{
		if (strcmp(editId, emp[i].employeeID) == 0)
			editIndex = i;
	}

	if (editIndex == -1)
		printf("Employee not found!");
	else
	{
		printf("Record Found!");

		printf("Enter updated details:");
		printf("NAME");
		scanf("%s", &temp.name);

		printf("Day joined:");
		scanf("%d %d %d", &temp.dateJoined.day, &temp.dateJoined.month, &temp.dateJoined.year);
		
		printf("Department : ");
		scanf("%s", &temp.department);

		printf("confirm update? (y=yes)");
		scanf("%c", &confirm);

		if (confirm == 'y')
		{
			strcpy(temp.name, editId); //emp[name] = temp;

		}
	}

	}


void addRecord()
{
	printf("Add a new employee's ID?(Y/N) > ");
	rewind(stdin);
	scanf("%c", &answer);
	printf("Number Employee to add?");
	scanf("%d", &num);
	while (answer == 'y' || answer == 'Y')
	{
		for (int i = 0; i < num ; i++)
		{
			printf("Employee's ID > ");
			rewind(stdin);
			scanf("%s", &emp[i].employeeID);
			printf("Employee's Name > ");
			rewind(stdin);
			scanf("%[^\n]", &emp[i].name);
			printf("Date Joined > ");
			scanf("%d %d %d", &emp[i].dateJoined.day, &emp[i].dateJoined.month, &emp[i].dateJoined.year);
			printf("Department > ");
			rewind(stdin);
			scanf("%s", &emp[i].department);
			nEmployees++;
		}
	}

	printf("\nEmployee Details\n");
	printf("----------------\n");
	printf("\nEmployee ID      Name          Date Joined          Department\n");
	for (int i = 0; i < 20; i++)
	{
		printf("\n%s  %18s        %2d/%2d/%d %17s\n", emp[i].employeeID, emp[i].name, emp[i].dateJoined, emp[i].department);
	}


}