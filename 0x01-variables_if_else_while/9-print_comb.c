#include <stdio.h>
/**
 * main - entry point
 * Description: use of commas
 * Return: (0)
 */
int main(void)
{
int a;
for (a = 48; a < 59; a++)
{
putchar(a);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
