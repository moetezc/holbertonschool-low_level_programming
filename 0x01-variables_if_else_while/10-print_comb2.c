#include <stdio.h>
/**
 * main - the main function.
 *
 * Return: 0
 */
int main(void)
{
	int i, n;



	for (i = '0' ; i <= '9' ; i++)
	{

		for (n = '0' ; n <= '9' ; n++)
		{
			putchar(i);
			putchar(n);
			if (!((i == '9') && (n == '9')))

			{
				putchar(44);
				putchar(32);
			}

		}

	}
	putchar('\n');
	return (0);
}
