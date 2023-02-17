#include <stdio.h>
/**
*main - this is the exit point
*Description: the program use while loop to print numbers with commas
*Return: is 0
*/
int main(void)
{
int i = 0;
while (i <= 9)
{
putchar('0' + i);
if (i != 9)
{
putchar(44);
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
