#include<stdio.h>

void main()
{
	int x=10;
	int y=5;

	printf("\n Values before swapping");
	printf("\n X: %d\n Y:%d\n", x,y);

	int temp=x;
	x=y;
	y = temp;
	printf("\n Values before swapping");
	printf("\n X: %d\n Y:%d\n", x,y);



}
