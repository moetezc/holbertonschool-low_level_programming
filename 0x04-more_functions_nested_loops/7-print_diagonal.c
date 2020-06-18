#include "holberton.h"
/**
 * print_diagonal - print diagonal with space.
 *
 * @n: paramater.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(32);
		}
		_putchar('\\');
		_putchar('\n');
	}
}
