#include "holberton.h"
/**
 * _isdigit - check if it's a digit.
 *@c: the paramter.
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
