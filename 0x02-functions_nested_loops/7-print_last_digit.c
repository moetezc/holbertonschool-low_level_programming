#include "holberton.h"
/**
 * print_last_digit - print last digit
 * @n: paramater.
 * Return: Always 0.
 */
int print_last_digit(int n)
{

	int a;

	a = n % 10;
	if (a < 0)
	{
		a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}
