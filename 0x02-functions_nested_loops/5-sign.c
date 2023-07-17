#include <stdio.h>
#include "main.h"
/**
 * print_sign - entry
 * Description: if sign
 *@n: variable
 *Return: 0 and 1
 */
int print_sign(int n)
{
if (n > 0)
{
	putchar(43);
        return (1);
}
else if (n == 0)
{
	putchar(48);
	return (0);
}
else
{
	putchar(45);
	return (-1);
}
putchar('\n');
}
