#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
char noqe;
noqe = 'a';
while (noqe <= 'z', noqe != 'q', noqe != 'e')
{
putchar(noqe);
noqe++;
}
putchar('\n');
return (0);
}
