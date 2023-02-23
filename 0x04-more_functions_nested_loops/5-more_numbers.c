#include "main.h"
/**
 * more_numbers - function to print multiple numbers
 * Descriprion: it prints 0 to 14 ten times
 * Return: 0
 */
void more_numbers(void)
{
int i = 0, j;
while (i < 10)
{
j = 0;
while (j < 15)
{
if (j < 10)
{
}
else
{
_putchar('0' + (j / 10));
}
_putchar('0' + (j % 10));
j++;
}
_putchar('\n');
i++;
}
}
