#include "main.h"
/**
 * print_diagonal - function
 * @n: used to get the number input
 * Description: to print a triangle with \ at the end
 * Return: 0 for now
 */
void print_diagonal(int n)
{
if (n > 0)
{
int i = 1, j;
while (i <= n)
{
j = 1;
while (j <= i)
{
if (j == i)
{
_putchar('\\');
}else
{
_putchar(' ');
}
j++;
}
if (i != n)
{
_putchar('\n');
}
i++;
}
}
_putchar('\n');
}
