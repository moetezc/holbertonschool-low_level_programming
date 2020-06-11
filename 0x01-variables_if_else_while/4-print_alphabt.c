#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
int noqe;
noqe = 'a' - 1;
while (noqe <= 'y')
{
noqe++;
if (noqe != 'q' && noqe != 'e')
putchar(noqe);
}
putchar('\n');
return (0);
}
