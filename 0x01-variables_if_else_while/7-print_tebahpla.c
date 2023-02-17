#include <stdio.h>
/**
*main - this is the exit point
*Description: the program use while loop to print alphabets in reverse
*Return: is 0
*/
int main(void)
{
int i = 'z';
while (i >= 'a')
{
putchar(i);
i--;
}
putchar('\n');
return (0);
}
