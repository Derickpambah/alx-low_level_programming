#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-entry point
 *
 * Descripton: Prints Decimal Digit using
 * only putchar
 *
 *Return: always 0(success)
 */
int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
