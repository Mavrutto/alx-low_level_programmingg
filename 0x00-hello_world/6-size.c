#include <stdio.h>
/*main - Entry point
 * Description - program that prints the size of various types on the computer it is compiled and run on.
 * Return: 0 (Success)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu 4 byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu 4 byte(s)\n", (unsigned long long int)sizeof(c));
printf("Size of a long long int: %lu 8 byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu 4 byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
