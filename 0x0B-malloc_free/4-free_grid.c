#include "main.h"
/**
 * free_grid - function to free memory
 * @grid: pointer to memory pointer
 * @height: row number
 * Description: the function is used to free memory in a 2d array
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
