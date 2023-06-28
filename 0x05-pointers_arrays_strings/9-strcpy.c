#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies strings pointed by the src
 * @dest: char type string
 * @src: char type string
 * description: copy the string pointed to
 * return:pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int z = -1;
do {
z++;
dest[z] = src[z];
} while (src[z] != '\0');
return (dest);
}
