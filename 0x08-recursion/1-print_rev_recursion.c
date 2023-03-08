#include "main.h"
/**
 * _print_rev_recursion - function to print string
 * @s: pointer to first char
 * Description: function prints strings in reverse order
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
_print_rev_recursion(s + 1);
printf("%c", *s);
}
}
