#include "function_pointers.h"
/**
 * int_index - function to get index of a value
 * @array: pointer
 * @size: array size
 * @cmp: function pointer
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) == 1)
{
return (i);
}
}
return (-1);
}
