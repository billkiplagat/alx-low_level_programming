#include <stdio.h>
/**
*main - this is the exit point
*Description: the program use for loop to print out alphabets
*Return: is 0
*/
int main(void)
{
int i = 'a', j = 'A';
while (i <= 'z')
{
putchar(i);
i++;
}
while (j <= 'Z')
{
putchar(j);
j++;
}
putchar('\n');
return (0);
}
