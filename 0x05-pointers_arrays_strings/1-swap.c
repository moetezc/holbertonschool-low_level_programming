#include "holberton.h"
/**
 * swap_int -  swaps the values of two integers..
 *@a : pointer.
 *@b : pointer.
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*b = c;
	*a = d;
}
