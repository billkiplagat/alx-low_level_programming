#include "main.h"
/**
 * _pow_recursion - function to get power of a number
 * @x: to get the base
 * @y: to get the exponent
 * Description: the function calculates the power of x
 * Return: power of x
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
