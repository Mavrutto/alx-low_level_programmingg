#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - entry
 *Description: last digit
 *@n: variable
 *Return: 1
 */
int print_last_digit(int n)
{
int m;
m = n % 10;
if ( m < 0)
{
	_putchar(-m + 48);
        return (-m);
}
else
{
	_putchar(m + 48);
	return (m);
}
}
