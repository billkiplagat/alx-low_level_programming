#include "main.h"
/**
 * times_table - function to print 9 times table
*/
void times_table(void)
{
int i = 0, j, sum;
while (i < 10)
{
_putchar('0');
j = 1;
while (j < 10)
{
_putchar(44);
_putchar(' ');
sum = j * i;
if (sum <= 9)
{
_putchar(' ');
}
else
{
_putchar('0' + (sum / 10));
}
_putchar('0' + (sum % 10));
j++;
}
_putchar('\n');
i++;
}
}
