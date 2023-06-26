#include "main.h"
/**
 *swap_int - swapping values
 *@a:variable
 *@b:variable
 *return: void
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
