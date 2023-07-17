#include <stdio.h>
/**
 * print_alphabet - entry
 * Description: alphabetic 10 lines
 * Return: Void
 */
void print_alphabet_x10(void)
{
int x;
int y;
for (x = 1; x <= 10; x++)
{
	for (y = 97; y <= 122; y++)
	{
		putchar(y);
	}
	putchar('\n');
}
}
