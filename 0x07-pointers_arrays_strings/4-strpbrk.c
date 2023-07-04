#include "main.h"
/**
 * _strpbrk - searches a string for any of a set bytes
 * @s:variable
 * @accept: the set of byes to be searched for
 * return: if and no else
 */
char *_strpbrk(char *s, char *accept)
{
int index;
while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s ==  accept[index])
return (s);
}
s++;
}
return ('\0');
}
