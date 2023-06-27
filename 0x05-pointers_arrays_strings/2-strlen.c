#include "main.h"
/**
 *_strlen = counts the number of strings
 *@s: variable
 *@len: variable
*/
int _strlen(char *s)
{
int len = 0;
while(*s != '\0')
{
len++;
s++;
}
return (len);
}
