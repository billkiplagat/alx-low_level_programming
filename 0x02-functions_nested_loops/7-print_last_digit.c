#include "main.h"
/**
 * print_last_digit -  function
 * @num: used to get inputs
 * Description: used to print the last digit
 * Return: 0 for now
 */
int print_last_digit(int num)
{
int last = num % 10;
if (last < 0)
{
last *= -1;
}
_putchar('0' + last);
return (last);
}
