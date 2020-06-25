#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		j = i / 2;
	while (j < i)
	{
		_putchar (str[j]);
	j++;
	}
	}
	else
	{
		j = (i - 1) / 2;
		while (j < i)
		{
			_putchar (str[j]);
		j++;
		}
	}
	_putchar ('\n');
}
