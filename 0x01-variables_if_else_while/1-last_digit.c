#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: if...else for the numbers
 * Return: 0(always)
*/
int main(void)
{
int n;
int x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d and is 0\n", n, x);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, x);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
}
return (0);
}
