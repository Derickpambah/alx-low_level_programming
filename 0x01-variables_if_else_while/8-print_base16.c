#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-entry point
 *
 * Description: Prints hexadecimal digits
 * in reverse order
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
