#include "main.h"
/**
 * print_line - function to print lines
 * @n: takes number of _ to be printed
 * Desctiption: this function prints lines with _
 * Return: 0
 */
void print_line(int n)
{
int i = 1;
while (i <= n)
{
if (n == 0 || n < 0)
{
_putchar('\n');
}
else
_putchar('_');
i++;
}
_putchar('\n');
}
