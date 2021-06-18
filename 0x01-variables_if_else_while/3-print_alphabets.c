#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main-entry point
 *
 * Description: Print lowercase and uppercase letters
 * using putchar only
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a';c <= 'z';)
	{
		putchar(c);
		c = c + 1;
	}
	for (c = 'A';c <= 'Z';)
	{
		putchar(c);
		c = c + 1;
	}
	putchar ('\n');
	return (0);
}
