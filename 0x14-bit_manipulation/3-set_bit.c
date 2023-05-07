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
unsigned long int m;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
if (n == NULL)
	return (-1);
m = 1 << index;
*n |= m;
return (1);
}
