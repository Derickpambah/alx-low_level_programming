#include "holberton.h"

/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}
	if (m / 10 != 0)
		print_number(m / 10);
	_putchar((m % 10) + '0');
}
