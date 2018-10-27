#include<stdio.h>

//Function to swap 2 numbers without using 3rd variable
void swap(int *x, int *y)
{
	*x = *x + *y;
   	*y = *x - *y;
   	*x = *x - *y;
}

void main()
{
	int x=10;
	int y=5;

	printf("\n Values before swapping");
	printf("\n X: %d\n Y: %d\n", x,y);
 	
	swap(&x, &y);
	
	printf("\n Values before swapping");
	printf("\n X: %d\n Y: %d\n", x,y);
}