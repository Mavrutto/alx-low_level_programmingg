#include <stdio.h>
/**
 * main - entry point
 * Description: lowercase apart from q and e 
 * Return: (0)
 */
int main(void)
{
int a = 97;
while (a <= 122)
{
if (a == 101 || a == 113)
a++;
continue;
}
putchar(a);
putchar('\n');
return (0);
}
