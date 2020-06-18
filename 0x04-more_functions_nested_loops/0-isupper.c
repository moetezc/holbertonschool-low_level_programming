#include "holberton.h"
/**
 * _isupper - check if the c is uppercase.
 *@c: the paramater.
 * Return: Always 0.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
