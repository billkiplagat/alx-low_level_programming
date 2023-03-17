#include "main.h"
/**
 * _realloc - function
 * @ptr: pointer to memory
 * @old_size: old size
 * @new_size: new size to be assigned
 * Description: the function reallocates new size
 * Return: new size pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
ptr = malloc(new_size);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (new_size > old_size)
{
ptr = realloc(ptr, new_size);
}
return (ptr);
}
