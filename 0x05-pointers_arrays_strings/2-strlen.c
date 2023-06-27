#include "main.h"
/**
 * _strlen - returns len of string
 *@s: variable
 *return: len
*/
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
