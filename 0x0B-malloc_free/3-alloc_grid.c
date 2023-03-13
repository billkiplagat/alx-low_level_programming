#include "main.h"
/**
 * alloc_grid - function to allocate data to 2d array
 * @width: number of width input
 * @height: number of height input
 * Description: the function assigns 0 to a 2d array
 * Return: pointer to new pointer
 */
int **alloc_grid(int width, int height)
{
int **new_mem;
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
new_mem = (int **) malloc(height * sizeof(int *));
if (new_mem == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
new_mem[i] = (int *) malloc(width * sizeof(int));
if (new_mem[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(new_mem[j]);
}
free(new_mem);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j <width ; j++)
{
new_mem[i][j] = 0;
}
}
return (new_mem);
}
