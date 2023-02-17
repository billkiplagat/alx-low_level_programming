#include <stdio.h>
/**
*main - this is the exit point
*Description: the program use while loop to print numbers
*Return: is 0
*/
int main(void)
{
int i = 0;
while (i < 10)
{
putchar('0' + i);
i++;
}
putchar('\n');
return (0);
}
