#include "main.h"
/**
 * print_square - function to print a square pattern
 * @size: used to get size of chars
 * Description: the program prints # for size numbers
 * Return: 0 for now
 */
void print_square(int size)
{
int i = 1, j;
while (i <= size)
{
j = 1;
while (j <= size)
{
_putchar('#');
j++;
}
i++;
_putchar('\n');
}
}
