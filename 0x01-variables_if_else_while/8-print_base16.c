#include <stdio.h>
/**
*main - this is the exit point
*Description: the program use while loop to print alphabets exept q and e
*Return: is 0
*/
int main(void)
{
int i = 0, j = 'a';
while (i <= 9)
{
putchar('0' + i);
i++;
}
while (j <= 'f')
{
putchar(j);
j++;
}
putchar('\n');
return (0);
}
