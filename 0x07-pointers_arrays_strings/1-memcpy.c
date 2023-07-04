#include "main.h"
#include <stdio.h>
/**
 * _mempy - function copies @n bytes from area @src
 * to memory area @dest
 * Description: copies @n
 * @n: function copies
 *
 * @src: bytes from memory area
 *
 * @dest: to memory area
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
