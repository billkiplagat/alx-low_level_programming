#include "main.h"
/**
 * get_bit - returns value of a bit at an index
 * @n: decimal number input
 * @index: value position
 *
 * Return: 1 or -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int num = 1 << index;
if (index < 0 || index > 31)
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
