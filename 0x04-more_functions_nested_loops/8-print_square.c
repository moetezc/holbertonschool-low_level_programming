#include "holberton.h"
/**
 * print_square - print a square with #.
 *
 *@size: paramater.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}

			_putchar('#');
			i++;
			_putchar('\n');
		}
	}
}
