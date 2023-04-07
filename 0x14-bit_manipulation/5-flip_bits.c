#include "main.h"
/**
 * flip_bits - gets different number by fliping bits
 * @n: first number arg
 * @m: second number arg
 *
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m;
unsigned int count = 0;
while (xor)
{
count += xor & 1;
xor >>= 1;
}
return (count);
}
