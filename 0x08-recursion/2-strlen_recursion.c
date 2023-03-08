#include "main.h"
/*
 * _strlen_recursion - function to print string number
 * @s: pointer to first char
 * Description: function prints the length of a string
 * Return: 0 or 1 + the function
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
