#include "main.h"
/**
 * print_most_numbers -function to print numbers
 * Description: print numbers other then 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
int i = 0;
while (i < 10)
{
if (i != 2 && i != 4)
{
_putchar('0' + i);
}
i++;
}
_putchar('\n');
}
