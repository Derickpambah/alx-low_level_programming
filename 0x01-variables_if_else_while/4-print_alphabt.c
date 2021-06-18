#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-entry point
 * Description: print lowercase letters using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	char chr;

	chr = 'a';
	while (chr <= 'z')
	{
		if (chr != 'q' && chr != 'e')
			putchar(chr);
		chr++;
	}
	putchar ('\n');
	return (0);
}
