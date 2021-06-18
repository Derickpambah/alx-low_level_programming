#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;
	char myStr[] = "Last digit of";


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	/* Code goes here */
	if (lastDigit > 5)
	{
		printf("%s %d is %d and is greater than 5\n", myStr, n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%s %d is %d and is 0\n", myStr, n, lastDigit);
	}
	else if (lastDigit < 6)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", myStr, n, lastDigit);
	}
	return (0);
}

