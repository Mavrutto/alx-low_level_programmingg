#include "main.h"
/**
 *print_rev - reverse string
 *@s:variable
*/
void print_rev(char *s)
{
int start = 0;
while (s[start])
start++;
while (start--)
  _putchar(s[start]);
	  _putchar('\n');

}
