#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;

	va_list lst;
	va_start(lst, n)

	if (n == 0)
		return 0;
	for(i = 0; i < n; i++)
	{
		sum += va_arg(lst, int);
	}
	return sum;
}

int main()
{
	_putchar("%d", sum_them_all(2, 98, 1024));
	_putchar("%d", sum_them_all(4, 98, 1024, 402, -1024));
	return (0);
}
