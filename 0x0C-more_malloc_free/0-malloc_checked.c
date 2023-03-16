#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function to allocate memory
 * @b: size to be allocated
 * Description: the function used size b to allocate memory
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
