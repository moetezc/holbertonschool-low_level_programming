#include "holberton.h"
/**
 * more_numbers - print numbers from 0 to 14 10 times.
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
