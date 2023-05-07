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
unsigned int m;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
if (n == NULL)
return (-1);
m = 1 << index;
m = ~m;
*n = *n & m;
return (1);
}
