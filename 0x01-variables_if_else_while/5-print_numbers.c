#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-entry point
 *
 * Description: prints decimal digits using
 *  only putchar
 * Return: always 0 (success)
 */
int main(void)
{
	int counter;

	while (counter < 10)
	{
		printf("%d", counter);
		counter++;
	}
	printf("\n");
	return (0);
}
