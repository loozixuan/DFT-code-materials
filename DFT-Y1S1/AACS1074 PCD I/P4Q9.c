#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)
void main()
{
	//create memory variables(p=prices & q=quantity)
	const float p1 = 35.50;
	const float p2 = 12.90;
	const float p3 = 600.00;
	const float p4 = 168.00;
	const float p5 = 120.00;
	const float taxRate = 0.0825;
	int q1, q2, q3, q4, q5;
	float total1, total2, total3, total4, total5;
	float subtotal, taxAmount, totalBill;
	char subTotal[10] = "SUBTOTAL";
	char tAX[4] = "TAX";
	char toTAL[6] = "TOTAL";
	char emptySpace1[30] = "";
	char space2[10] = "";
	char space3[10] = "";
	char space4[10] = "";
	char space5[10] = "";
	char space6[10] = "";
	char space7[10] = "";

	printf("Enter the number of items sold:\n");
	printf("Keyboard > ");
	scanf("%d", &q1);
	printf("Mouse > ");
	scanf("%d", &q2);
	printf("Monitor > ");
	scanf("%d", &q3);
	printf("Printer > ");
	scanf("%d", &q4);
	printf("Speaker > ");
	scanf("%d", &q5);

	//calculate
	total1 = p1 * q1;
	total2 = p2 * q2;
	total3 = p3 * q3;
	total4 = p4 * q4;
	total5 = p5 * q5;
	subtotal = total1 + total2 + total3 + total4 + total5;
	taxAmount = subtotal * taxRate;
	totalBill = subtotal + taxAmount;

	//Output
	printf("\nQTY%2sDESCRIPTION%3sUNITPRICE%3sTOTALPRICE\n",space4,space5,space5);
	printf("---%2s-----------%3s----------%2s----------\n",space2,space3,space4);
	printf("%-5dKEYBOARD%16.2f%12.2f\n", q1, p1, total1);
	printf("%-5dMOUSE%19.2f%12.2f\n", q2, p2, total2);
	printf("%-5dMONITOR%17.2f%12.2f\n", q3, p3, total3);
	printf("%-5dPRINTER%17.2f%12.2f\n", q4, p4, total4);
	printf("%-5dSPEAKER%17.2f%12.2f\n", q5, p5, total5);
	printf("%30s-----------\n", emptySpace1);
	printf("%30s%11.2f\n", subTotal, subtotal);
	printf("%25s(8.25%)%10.2f\n", tAX, taxRate);
	printf("%27s%14.2f\n", toTAL, totalBill);



	system("pause");
}