#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - entry
 * @n: variable
 * Return: --
 */
void print_to_98(int n)
{
if (n <= 98)
{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	printf("%d,", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
}
else
{
	printf("%d, ", n);
}
if (n >= 98)
{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
	printf("%d, ", n);
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
}
}
