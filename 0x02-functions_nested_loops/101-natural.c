#include <Stdio.h>
/**
 * main - entry
 * Description - summation
 * Return:--
 */
int main(void)
{
int x;
int m = x % 3;
int n = x % 5;
int sum = m + n;
for (int x = 0; x <= 1024; x++)
{
if ((m = x % 3) || (n = x % 5))
{
return (sum);
}
else
{
return (0);
}
}
}
