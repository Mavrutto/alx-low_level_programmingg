#include "main.h"
#include <stdio.h>
/**
 *_puts - prints a string
 *@str: variable
 *Return: 0(Success)
*/
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str++);
}
putchar('\n');
}
