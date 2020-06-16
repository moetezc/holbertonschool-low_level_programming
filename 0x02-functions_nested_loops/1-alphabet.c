#include "holberton.h"
/**
 * print_alphabet - print all alphabets
 *
 * Return : void
 */
void print_alphabet(void)
{
int alp = 'a';
while (alp <= 'z')
{
	_putchar(alp);
	alp++;
}
_putchar('\n');
}
