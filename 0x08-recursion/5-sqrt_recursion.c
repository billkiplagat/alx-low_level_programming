#include "main.h"
/**
 * srtHelper - function to get square root of a number
 * @n: number input
 * @guess: to set the first test
 * Description: the function receives n and guess input then compute the root
 * Return: n
 */
int srtHelper(int n, int guess)
{
if (n < 0)
{
return (-1);
}
if (guess * guess == n)
{
return (guess);
}
if (guess * guess > n)
{
return (-1);
}
else
{
return (srtHelper(n, guess + 1));
}
}
/**
 * _sqrt_recursion - function to pass number and 1st guess input
 * @n: number input from main
 * Description: the function passes n and value 1 to srtHelper
 * Return: srtHelper
 */
int _sqrt_recursion(int n)
{
return (srtHelper(n, 1));
}
