#include <stdlib.h>

/**
* free_grid - Frees a 2D grid previously created by alloc_grid
* @grid: The 2D grid to free
* @height: The height of the grid
*
* Description: Frees the memory allocated
* for each row of the grid and then
* frees the memory allocated for the grid itself.
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
