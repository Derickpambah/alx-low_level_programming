#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main-positive or negative
 * Description:tells a positive number,negative
 * or equal to zero
 * Return:return 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n==0)
	{
		printf("%d is zero\n", n);
	}
	else if(n>0)
	{
		printf("%d is positive\n", n);
	}
	else (n<0)
	{
		printf("%d is negative\n", n);
	}
	return(0);
}
