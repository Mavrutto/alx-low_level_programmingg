#include "main.h"
/**
 * main - Entry point
 * description - lowercase
 * return: always 0(Success)
*/
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar("/n");
return (0);
}
