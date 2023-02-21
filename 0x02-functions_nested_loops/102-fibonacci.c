#include <stdio.h>
/**
*main -  function
*Description: get first 50 fibonacci numbers
*Return: 0 for now
*/

int main(void)
{
int i, num1 = 1, num2 = 2, fib;
for (i = 0; i < 50 ; i++)
{
printf("%d, ", num1);
fib = num1 + num2;
num1 = num2;
num2 = fib;
}
return (0);
}
