#include "main.h"
#include <stdio.h>
/**
 *main - Entry point
 *description: prints the numbers 1-100
 * Fizz for multiple of 3, Buzz for 5
 * *Return: always 0
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%i", i);
}
if (i < 100)
printf(" ");
else
printf("\n");
return (0);
}
