#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-entry point
 *
 * Description: Prints lower case letters
 * in reverse order using only putchar
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
