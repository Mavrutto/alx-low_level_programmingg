#include <stdio.h>
/**
 * main - entry point
 * Description - lowercase and then uppercase
 * Retrun: (0)
 */
int main(void)
{
int a = 97;
int A = 65;
while (a <= 122)
{
putchar(a++);
}
while (A <= 90)
{
putchar(A++);
}
putchar('\n');
return (0);
}
