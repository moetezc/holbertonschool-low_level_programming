#include "holberton.h"
/**
 * print_line - print a line.
 *
 * @n: parameter.
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
