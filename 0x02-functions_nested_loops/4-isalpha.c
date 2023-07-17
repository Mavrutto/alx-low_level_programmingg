#include <stdio.h>
#include "main.h"
/**
 * _isalpha - entry
 * Description: slpha
 * @c: variable
 * Return: 0 and 1
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
	return (1);
else if (c >= 65 && c <= 90)
	return (1);
else
	return (0);
}
