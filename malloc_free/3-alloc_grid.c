#include <stdlib.h>

/**
* alloc_grid - Creates a 2D array of integers and initializes it to 0
* @width: The width of the grid
* @height: The height of the grid
*
* Description: Allocates memory for a 2D array of size width x height and
* initializes each element to 0. Returns NULL if width or height is 0 or
* negative, or if memory allocation fails.
*
* Return: Pointer to the 2D array, or NULL on failure
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (0);

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{

for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}

for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
