#include "main.h"
/**
 * print_triangle - function to print triangle
 * @size: number inputs
 * Description: the code prints a triangle using #
 * Return: 0 for now
*/
void print_triangle(int size)
{
if (size > 0)
{
int i, j;
for (i = 1; i <= size ; i++)
{
for (j = size; j >= 1 ; j--)
{
if (i >= j)
{
_putchar('#');
}
else
_putchar(' ');
}
if (i != size)
{
_putchar('\n');
}
}
}
_putchar('\n');
}
