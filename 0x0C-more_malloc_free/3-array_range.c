#include "main.h"
/**
 * array_range - function
 * @min: minimum number input
 * @max: maximum number input
 * Description: function prints number from min to max in order
 * Return: pointer to memory
 */
int *array_range(int min, int max)
{
int i;
int size = max - min + 1;
int *buffer;
int *ptr;
if (min > max)
return (NULL);
buffer = malloc(size * sizeof(int));
if (buffer == NULL)
return (NULL);
ptr = buffer;
for (i = min; i <= max; i++)
{
*ptr = i;
ptr++;
}
return (buffer);
}
