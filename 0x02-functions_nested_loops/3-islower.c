#include <stdio.h>
#include "main.h"
/**
 * _islower - entry
 * Description: lowercase
 * Return: 0 and 1
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
else
	return (0);
}
