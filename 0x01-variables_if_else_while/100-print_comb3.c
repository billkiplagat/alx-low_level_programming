#include <stdio.h>
/**
*main - this is the exit point
*Description: the program use while loop to print 2 digit combination
*Return: is 0
*/
int main(void)
{
int i = 0, j;
while (i < 9)
{
j = i + 1;
while (j <= 9)
{
putchar('0' + i);
putchar('0' + j);
if (i != 8 || j != 9)
{
putchar(44);
putchar(' ');
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
