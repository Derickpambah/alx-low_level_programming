#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - prints out the alphabet in both cases
 *
 * Description: Print lowercase and uppercase letters
 * using putchar only
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 97 ; c < 123 ; c++)
	{
		putchar(c);
	}
	for (c = 65 ; c < 91 ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
