#include "holberton.h"

/**
 * **alloc_grid - entry point
 *
 * @width: int argument
 * @height: int argument
 *
 * Description: Creates a 2D array
 *
 * Return: pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
int a, b;
int **grid;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(sizeof(int *) * height);

if (grid == NULL)
return (NULL);

for (a = 0; a < height; a++)
{
grid[a] = malloc(sizeof(int) * width);

if (grid[a] == NULL)
{
for (; a >= 0; a--)
free(grid[a]);

free(grid);
return (NULL);
}
}

for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
grid[a][b] = 0;
}

return (grid);
}
