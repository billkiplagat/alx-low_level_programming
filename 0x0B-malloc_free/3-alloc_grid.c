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
int i;
if (width <= 0 || height <= 0)
{
return (NULL);
}
new_mem = (int **) malloc(height * sizeof(int *));
for (i = 0; i < height; i++)
{
new_mem[i] = (int *) malloc(width * sizeof(int));
}
if (new_mem == NULL)
{
return (NULL);
}
memset(new_mem[0], 0, height * width * sizeof(int));
return (new_mem);
}
