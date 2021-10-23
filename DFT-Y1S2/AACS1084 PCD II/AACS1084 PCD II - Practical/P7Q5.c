#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#pragma warning(disable:4996)
void displayVehicleRate(char vt);
char getVehicleType();
int calcHoursParked(int inHr, int inMin, int outHr, int outMin);
int parkingCharge(char veh, int hrs);

void displayVehicleRate(char vt)
{
	switch (vt)
	{
	case 'c':
		printf("Vehicle type : CAR => RM2.00 per hour (or part thereof)\n"); break;
	case 'b':
		printf("Vehicle type : BAS => RM3.00 per hour (or part thereof)\n"); break;
	case 't':
		printf("Vehicle type : TRUCK => RM4.00 per hour (or part thereof)\n"); break;
	}

}

char getVehicleType()
{
	char vechile;

	do{
		printf("Enter a vehicle type -(c)ar,(b)us,(t)ruck : ");
		rewind(stdin);
		scanf("%c", &vechile);
		vechile = tolower(vechile); //tolower or toupper is fine
	} while (vechile == 'c' || vechile == 'b' || vechile == 't');

	return vechile;
}


int calcHoursParked(int inHr, int inMin, int outHr, int outMin)
{
	int hrs;

	if (inHr < 7 || inHr>23 || outHr < 7 || outHr>23 || inHr > outHr || (inHr == outHr && inMin > outMin))
		return -1; //got error
	hrs = outHr - inHr; //15.30 - 10.00 = 5hours

	if (outMin > inMin) //30 minutes > 0
		hrs++; // 5hrs + 1 hrs = 6hrs
	return hrs;
}

int parkingCharge(char veh,int hrs)
{
	double charges;
	switch (tolower(veh))
	{
	case 'c': charges = 2 * hrs; break;
	case 'b': charges = 3 * hrs; break;
	case 't': charges = 4 * hrs; break;
	default: charges = 0; break;
	}
	return charges;
}

int main()
{
	char vehType;
	int inHr, inMin, outHr, outMin, hrsParked;
	double charges;
	vehType=getVehicleType();

	printf("Time entered car park: ");
	scanf("%d %d", &inHr, &inMin);
	printf("Time entered car park: ");
	scanf("%d %d", &outHr, &outMin);

	hrsParked = calcHoursParked(inHr,inMin,outHr,outMin); //5hours

	if (hrsParked == -1)
		printf("Error, please see the managment.\n");
	else
	{
		charges = parkingCharge(vehType,hrsParked); //(c,5)
		printf("========================================================\n");
		printf("                  Parking Ticket                        \n");
		displayVehicleRate(vehType);
		printf("Hours parked: %d\n", hrsParked);
		printf("please pay this amount -------> RM%.2f\n", charges);
		printf("Thank you and have a nice day!\n");
	}

	system("pause");
}