#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
void displayCinemaMenu();
void bookATicket();
void displaySeatLayout();

void main()
{
	int option;
	do
	{
		displayCinemaMenu();
		scanf("%d", &option);

		switch (option)
		{
		case 1:
			bookATicket(); break;
		case 2:
			displaySeatLayout(); break;
		case 3:
			break;
		default:
			printf("NO such option\n");

		}
	} while (option !=3);

	system("pause");
}

void displayCinemaMenu()
{
	printf("CINEMA Menu\n\n");
	printf("1. Book a Ticket\n");
	printf("2. Display Seat Layout\n");
	printf("3. Exit\n");
	printf("Choose an option:");
}

void bookATicket()
{
	printf("under- construction - Book A Ticket\n");

}

void displaySeatLayout()
{
	printf("under- construction - Display Seat Layout\n");
}