#include "main.h"
/**
 * _calloc - function to allocate memory to an array
 * @nmemb: elements input
 * @size: size of array
 * Description: the function uses malloc to allocate memory to an array
 * Return: allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *array_memory;
if (nmemb == 0 || size == 0)
return (NULL);
array_memory = malloc(nmemb * size);
if (array_memory == NULL)
return (NULL);
memset(array_memory, 0, nmemb * size);
return (array_memory);
}
