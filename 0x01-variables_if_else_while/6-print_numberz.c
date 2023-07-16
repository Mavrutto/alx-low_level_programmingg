#include <stdio.h>
/**
 * main - entry point
 * Description - using putchar
 * Return: (0)
 */
int main(void)
{
int a = 0;
for (a = 0; a < 20; a++)
{
putchar(a + 48);
}
putchar('\n');
return (0);
}
