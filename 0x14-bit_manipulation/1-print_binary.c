#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: number input
 *
 *
 */
void print_binary(unsigned long int n)
{
int found_one = 0;
int i, bit;
unsigned long int mask;
for (i = sizeof(n) * 8 - 1; i >= 0; i--)
{
mask = 1UL << i;
bit = (n & mask) != 0;
if (bit == 0 && !found_one)
{
continue;
}
printf("%d", bit);
if (bit == 1)
{
found_one = 1;
}
}
if (!found_one)
{
printf("0");
}
}
