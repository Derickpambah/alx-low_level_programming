#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of the numbers
 * @n: number of undefined arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	unsigned int i, sum = 0;

	if (n == 0)
		return 0;
	va_start(lst, n);

	/* Iterate through list, update sum, free list*/
	for(i = 0; i < n; i++)
		sum += va_arg(lst, int);
	va_end(lst);

	return (sum);
}
