#include "variadic_functions.h"
/**
 * sum_them_all - sum up all arguments in CL
 * @n: arguments number
 *
 * Return: sum or 0 when n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i, sum = 0;
if (n == 0)
return (0);
va_start(args, n);
for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
