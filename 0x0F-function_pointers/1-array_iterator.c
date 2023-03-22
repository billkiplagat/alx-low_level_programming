#include "function_pointers.h"
/**
 * array_iterator - function to iterate an array
 * @array: pointer to array
 * @size: array size
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (array == NULL || action == NULL)
	return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
