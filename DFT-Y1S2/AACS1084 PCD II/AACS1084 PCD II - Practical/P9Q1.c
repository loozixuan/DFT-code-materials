#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int upgrade(int mgTest, int *cwMark);

int main()
{
	int makegood,cw,is_upgrade;

 // ask the user ro key in their make good test and coursework marks
	do {
		printf("Enter Make Good Test Mark: ");
		scanf("%d", &makegood);
	} while (makegood < 0 || makegood>100);

	do {
		printf("Enter Coursework Mark: ");
		scanf("%d", &cw);
	} while (cw < 0 || cw>100);

	is_upgrade= upgrade(makegood, &cw);
	
	if (is_upgrade == 1)
		printf("Your marks has been upgraded!\n");
	else
		printf("No changes in your marks.\n");
	system("pause");
}

int upgrade(int mgTest, int *cwMark)
{
	if (*cwMark >= 40 && *cwMark <= 49 && mgTest >= 50)
	{
		*cwMark += mgTest / 10;
		if (*cwMark > 50)
			*cwMark = 50;
		return 1; //sucessfully changed the marks
	}
		else
			return 0;//did not change any marks
	

}
