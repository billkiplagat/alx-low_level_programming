#include <stdio.h>
/**
*main -  function
*Description: get first 50 fibonacci numbers
*Return: 0 for now
*/

int main(void)
{
int i;
long num1 = 1, num2 = 2, fib;
for (i = 0; i < 50 ; i++)
{
printf("%ld", num1);
if (num1 != 20365011074)
printf(", ");
fib = num1 + num2;
num1 = num2;
num2 = fib;
}
printf("\n");
return (0);
}
