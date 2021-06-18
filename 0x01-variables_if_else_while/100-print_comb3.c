#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-entry point
 *
 * Description: Prints all possible different combination
 * of two digits
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int c;
	int i;

	for (c = 48; c < 57; c++)
	{
		for (i = c + 1; i < 58; i++)
		{
			putchar(c);
			putchar(i);
			if (c != 56  || i != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
