#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()
{
	int dividend, divisor, quotient, remainder;
	printf("Enter dividend > ");
	scanf("%d", &dividend);

	printf("Enter divisor > ");
	scanf("%d", &divisor);

	//calculate quotien
	quotient = dividend / divisor;
	//calculate remainder
	remainder = dividend % divisor;

	printf("%d divided by %d equals to %d remainder %d\n",dividend,divisor,quotient,remainder);
	printf("the quotient is %d and the remainder is %d\n",quotient,remainder);










	system("pause");
}
