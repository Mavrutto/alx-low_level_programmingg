#include "main.h"
#include <string.h>
/**
 *rev_string - revere a string
 *@s: variable
 *retunrn:void
*/
void rev_string(char *s)
{
if (s != NULL)
{
int length = strlen(s);
int i, j;
char temp;
for (i = 0, j = length - 1; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
}
