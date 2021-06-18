#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main-entry point
 *
 * Return: ALways 0 (success)
 */
int main(void)
{
	char chr;

	chr = 'a';
	while (chr <= 'z')
	{
		putchar (chr);
		chr++;
	}
	chr = 'A';
	while (chr <= 'Z')
	{
		putchar (chr);
		chr++;
	}
	putchar ('\n');
	return (0);
}
