#include <stdio.h>
#include "main.h"
/**
 * times_table - entry
 * Return: =-
 */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
	for (j = 1; j <= 9; j++)
	{
		_putchar(j);
		_putchar('\n');
	}
}
}
