#include<stdio.h>
#pragma warning(disable:4996)

//global structure
typedef struct
{
	int x, y;
}Point;

//main program
int main()
{
	Point point;
	printf("Enter coordinates of x:");   //x-coordinates
	scanf("%d", &point.x);
	printf("Enter coordinates of y:");   //y-coordinates
	scanf("%d", &point.y);

	//take the x and y to evaluate which quadrant
	if (point.x > 0 && point.y > 0)
		printf("The point (%d,%d) is in Quadrant 1.\n", point.x, point.y);
	else if(point.x<0&&point.y>0)
		printf("The point (%d,%d) is in Quadrant 2.\n", point.x, point.y);
	else if(point.x<0 && point.y<0)
		printf("The point (%d,%d) is in Quadrant 3.\n", point.x, point.y);
	else if(point.x>0&&point.y<0)
		printf("The point (%d,%d) is in Quadrant 4.\n", point.x, point.y);
	else if(point.x==0&&point.y>=1||point.y<=-1)
		printf("The point (%d,%d) is in y-axis.\n", point.x, point.y);
	else if (point.y == 0 && point.x >= 1 || point.x <= -1)
		printf("The point (%d,%d) is in x-axis.\n", point.x, point.y);
	else
		printf("The point (%d,%d) is in the origin(0,0).\n", point.x, point.y);

	system("pause");
}