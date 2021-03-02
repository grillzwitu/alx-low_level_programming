#include "holberton.h"

/**
 * free_grid - entry point
 *
 * @grid: pointer argument
 * @height: int argument
 *
 * Description: Frees the memory space allocated to grid
 * in 3-alloc_grid.c
 *
 * Return: Void
 */

void free_grid(int **grid, int height)
{
int a;

for (a = 0; a < height; a++)
free(grid[a]);

free(grid);
}
