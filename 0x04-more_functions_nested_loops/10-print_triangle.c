#include "main.h"
/**
 * print_triangle - function to print triangle
 * @size: number inputs
 * Description: the code prints a triangle using #
 * Return: 0 for now
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i = 1, j, k;
while (i <= size)
{
j = size - 1;
while (j >= i)
{
_putchar(' ');
j--;
}
k = 1;
while (k <= i)
{
_putchar('#');
k++;
}
i++;
putchar('\n');
}
}
}
