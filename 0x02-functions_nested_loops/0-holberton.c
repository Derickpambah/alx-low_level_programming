#include <unistd.h>

/**
 * main: entry-point
 *
 * Description: program that prints Holberton
 *
 * Return: on success 0.
 */
int main(void)
{
	(write(1, &Holberton, 1));
	
	return (0);
}
