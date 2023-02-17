#include <stdio.h>
/**
*main - this is the exit point
*Description: the program use while loop to print a-z
*Return: is 0
*/
int main(void)
{
int i = 'a';
while (i <= 'z')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
