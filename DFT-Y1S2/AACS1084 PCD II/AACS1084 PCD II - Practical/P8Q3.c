#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int bigger(int x, int y);
int smaller(int x, int y);
void hiLo(int x, int y, int z, int*highest, int*lowest);

void hiLo(int x, int y, int z, int*highest,int*lowest)
{
	if (z > bigger(x, y))
		*highest = z;
	else
		*highest = bigger(x, y);

	if (z < smaller(x, y))
		*lowest = z;
	else
		*lowest = smaller(x, y);
}

int bigger(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int smaller(int x,int y)
{
	if (x < y)
		return x;
	else
		return y;
}

int main()
{
	int x=2, y=6,z=10,high,low;
	hiLo(x, y, z, &high, &low);
	printf("The highest is %d and the lowest is %d\n",high,low);
	system("pause");
}