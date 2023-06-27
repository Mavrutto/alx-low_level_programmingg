#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
*puts2-print string
*@str:variable
*return:void
*/
void puts2(char *str)
{
int z = 0;
while (str[z] != '\0')
{
if (z % 2 == 0)
{
putchar(str[z]);
}
z++;
}
putchar('\n');
}
