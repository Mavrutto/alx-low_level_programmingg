#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - Entry point
 * Description - The output should be zero, negative or positive
* Return - 0 (Success)/*
*/int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%dis positive\n",n);
}
else if (n == 0)
{
printf("%d0 is zero\n",n);
}
else
{
printf("%dis negative\n");
}
return (0);
}
