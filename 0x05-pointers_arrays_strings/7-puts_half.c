#include "main.h"
/**
 * puts_half - function to print half chars
 * @str: to get char inputs
 * Description: the function prints half of the string
 */
void puts_half(char *str)
{
int i, len, temp;
len = strlen(str);
temp = len;
if (len % 2 != 0)
{
len++;
}
for (i = 0; i < len / 2; i++)
{
str++;
}
for (i = len / 2; i < temp; i++)
{
_putchar(*str);
str++;
}
}
