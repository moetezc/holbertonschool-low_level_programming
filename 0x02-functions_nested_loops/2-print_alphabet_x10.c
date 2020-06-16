#include "holberton.h"
/**
 *main - entry point
 *
 *Return: 0
 */
void print_alphabet_x10(void)
{
	int alp, i;

	for (i = '0'; i <= '9'; i++)
	{
		alp = 'a';
		while (alp <= 'z')
		{
			_putchar(alp);
			alp++;
		}
		_putchar('\n');
	}
}
