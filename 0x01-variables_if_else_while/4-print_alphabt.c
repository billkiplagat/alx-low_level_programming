#include <stdio.h>
/**
*main - this is the exit point
*Description: the program use while loop to print alphabets exept q and e
*Return: is 0
*/
int main(void)
{
int i = 'a';
while (i <= 'z')
{
if (i != 'q' && i != 'e')
putchar(i);
i++;
}
putchar('\n');
return (0);
}
