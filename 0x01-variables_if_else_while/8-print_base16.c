#include <stdio.h>
/**
 * main - the main function.
 *
 * Return: 0
 */
int main(void)
{
	int n;
	char i;

	i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	n = 'a';
	while (n < 'g')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
