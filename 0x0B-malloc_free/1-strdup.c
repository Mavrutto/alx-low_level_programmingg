#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new meory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *copy
int i, len = 0;
if (str == 0)
return (NULL)
while (str[len] != '\0')
len++;
copy = (char *)malloc((sizeof(char) * len) +1);
if (copy == NULL)
return (NULL);
for (i = 0; i < len; i++)
copy[i] = str[i];
copy[len] = '\0';
return (copy);
}
