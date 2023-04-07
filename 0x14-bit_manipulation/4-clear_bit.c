#include "main.h"
/**
 * clear_bit - sets bit at index to 0
 * @n: pointer to number
 * @index: position
 *
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned int) * 8)
{
return (-1);
}
*n &= ~(1 << index);
return (*n);
}
