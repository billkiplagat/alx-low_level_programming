#include "main.h"
/**
 * set_bit - returns value of a bit at an index
 * @n: decimal number input
 * @index: value position
 *
 * Return: 1 or -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned int) * 8)
{
return (-1);
}
*n |= (1 << index);
return (*n);
}
