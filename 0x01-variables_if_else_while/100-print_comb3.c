#include <stdio.h>
/**
 * main - entry point
 * Description: 2 numbers
 * Return: (0)
 */
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		putchar(i + '0');
		putchar(j + '0');
if (i != 9 || j != 8)
{
	putchar(',');
	putchar(' ');
}
}
}
putchar('\n');
return (0);
}
