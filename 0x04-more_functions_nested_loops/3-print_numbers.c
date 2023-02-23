#include "main.h"
/**
 * print_numbers - function to print numbers
 * Description: prints 0 to 9 using a while loop
 * Return: 0
 */
void print_numbers(void)
{
int i = 0;
while (i < 10)
{
_putchar('0' + i);
i++;
}
_putchar('\n');
}
