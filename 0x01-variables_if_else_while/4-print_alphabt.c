#include <stdio.h>
/**
 *main - Entry point
 *Description - Alphabets in lowercase
 *Return: Always return 0(success)
*/
int main(void)
{
char c;
c = 'a';
while
(c <= 'z')
{
if ((c != 'q' && c != 'e') && c <= 'z')
putchar(c);
c++;
}
putchar('\n');
return (0);
}
