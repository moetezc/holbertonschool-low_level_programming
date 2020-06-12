#include <stdio.h>
/**
 * main - the main function.
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = 122;
	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
