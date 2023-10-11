#include "search_algos.h"

/**
* linear_search - search for value in an integer array
* @array: pointer to array of ints
* @size: size of array
* @value: value to locate
*
* Return: index of value; -1 if value not found
*/
int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
return (-1);

for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}

return (-1);
}
