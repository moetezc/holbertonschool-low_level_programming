#include "holberton.h"
/**
 * print_rev - prints a string, in reverse.
 *
 * @s : pointer.
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (s[j] != '\0')
	{
		i--;
		_putchar(s[i]);
		j++;
	}
	_putchar('\n');
}
