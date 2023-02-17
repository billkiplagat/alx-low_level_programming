#include <stdio.h>
/**
*main - this is the exit point
*Description: the program use while loop to print combination of three digits
*Return: is 0
*/
int main(void)
{
int i = 0, j, k;
while (i < 9)
{
j = i + 1;
while (j <= 9)
{
k = j + 1;
while (k <= 9)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);
if (i != 7 || j != 8 || k != 9)
{
putchar(44);
putchar(' ');
}
k++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}

