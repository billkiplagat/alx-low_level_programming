#include "main.h"
/**
 * _puts - function to print chars
 * @s: string input
 * Description: the function prints a string
 */
void _puts(char *s)
{
int index;
for (index = 0; *(s + index) != '\0'; index++)
{
_putchar(*(s + index));
}
_putchar('\n');
}
