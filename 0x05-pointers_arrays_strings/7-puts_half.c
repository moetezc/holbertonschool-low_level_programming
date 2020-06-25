#include "holberton.h"
/**
 * puts_half - put half of string.
 *
 * @str : pointer.
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
