#include "main.h"
/**
 * factorial - function to get factorials
 * @n: number input
 * Description: the function uses recursion to get factorials
 * Return: n* factorial of n - 1
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
