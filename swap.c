# include <stdio.h>

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void main(){
	int X = 5;
	int Y = 6;
	printf("X is %d\n", X);
	printf("Y is %d\n", Y);
	swap(&X,&Y);
	printf("X is %d\n", X);
	printf("Y is %d\n", Y);

}
