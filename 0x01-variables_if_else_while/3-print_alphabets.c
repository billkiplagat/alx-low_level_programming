#include <stdio.h>
/**
*main - this is the exit point
*Description: the program use for loop to print out alphabets
*Return: is 0
*/
int main(void)
{
for (int i = 'a'; i <= 'z' ; i++)
putchar(i);

for (int i = 'A'; i <= 'Z' ; i++)
putchar(i);
putchar('\n');
return (0);
}
