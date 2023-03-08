#include "main.h"
/**
 * _puts_recursion - function to print string
 * @s: pointer to first char
 * Description: function prints strings using a pointer just like puts
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
printf("%c", *s);
s++;
_puts_recursion(s);
}
else
{
printf("\n");
}
}
