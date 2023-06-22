#include "main.h"
/**
 * print_alphabet_x10 - make alphabet 10 times
 * Return: always0(Success)
*/
void print_alphabet_x10(void)
{
char letter;
int i;
while (i < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
i++;
}
}
