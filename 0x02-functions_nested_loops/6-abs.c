#include "holberton.h"
/**
 * _abs - absolute.
 * @n: paramater.
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (n * (-1));
	else
		return (0);
}
