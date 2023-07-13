#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - fees 2d array
 * @grid: 2d
 * @height: height
 * Description: fees
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}