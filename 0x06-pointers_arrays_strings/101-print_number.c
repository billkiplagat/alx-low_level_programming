#include "main.h"
/**
 * print_number - function to print numbers
 * @n: parameter to get number input
 * Description: the function prints numbers with _putchar
 * Return: its void
 */
void print_number(int n)
{
int num_digits = 0;
int temp = n;
int divisor, i, digit;
if (n == 0)
{
_putchar('0');
return;
}
if (n < 0)
{
_putchar('-');
n = -n;
}
while (temp != 0)
{
num_digits++;
temp /= 10;
}
while (num_digits > 0)
{
divisor = 1;
for (i = 1; i < num_digits; i++)
{
divisor *= 10;
}
digit = n / divisor;
_putchar('0' + digit);
n -= digit *divisor;
num_digits--;
}
}
