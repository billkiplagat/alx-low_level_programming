#include "main.h"
/**
 * get_bit - returns value of bit at index
 * @n: decimal number
 * @index: position
 *
 * Return: 1 or -1 when error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int num = 1 << index;
if ((index > 31) != 0)
{
return (-1);
}
if ((n & num) == 0)
{
return (0);
}
else
{
return (1);
}
}
