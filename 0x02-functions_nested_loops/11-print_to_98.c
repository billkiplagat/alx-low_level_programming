#include "main.h"

/**
 * print_to_98 - function to print numbers to 98
 * @n: used to get input
 * Description: printing to 98
 * Return: 0
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
