#include "main.h"
/**
 * prime_helper - function to evaluate numbers
 * @n: number input
 * @i: condition number input which is n / 2
 * Description: the function evaluates if a number is prime
 * Return: 0 or 1
 */
int prime_helper(int n, int i)
{
if (i == 1)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (prime_helper(n, i - 1));
}
/**
 * is_prime_number - function to return 1 or 0
 * @n: number input from main
 * Description: the function returns 0 or 1 to main after computing
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (prime_helper(n, n / 2));
}
