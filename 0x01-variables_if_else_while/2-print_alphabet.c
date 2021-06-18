#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char chr;

	for (chr = 'a' ; chr <= 'z' ; chr++)
		putchar (chr);
	putchar ('\n');
	return (0);
}

