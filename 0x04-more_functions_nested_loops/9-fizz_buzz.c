#include "main.h"
/**
 * main - main execution point
 * Description: the code prints 1 to 100 but with some modification
 * Return: 0 for now
 */
int main(void)
{
int i = 1;
while (i <= 100)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf(" FizzBuzz");
}
else if (i % 3 == 0 && i % 5 != 0)
{
printf(" Fizz");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf(" Buzz");
}
else
printf(" %d", i);
i++;
}
printf("\n");
return (0);
}
