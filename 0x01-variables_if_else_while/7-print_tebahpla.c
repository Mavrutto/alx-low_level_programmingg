#include <stdio.h>
/**
 * main - entry 
 * Description: backwards letters
 * Return: (0)
 */
int main(void)
{
int i = 122;
while ( i >= 97)
putchar(i--);
putchar('\n');
return (0);
}
