#include <stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()
{

	float centigrade, fahrenheit;
	printf("Enter Temperature in centigrade : ");
	scanf("%f", &centigrade);

	//calculate temperature in fahrenheit
	fahrenheit = 32 + (centigrade*(180.0 / 100.0));
	printf("Temperature in fahrenheit is %.2f\n", fahrenheit);






		system("pause");
}