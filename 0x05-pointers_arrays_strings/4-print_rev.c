#include "main.h"
/**
 * print_rev - function to print chars
 * @s: to get char inputs
 * Description: the function prints a string in reverse
 */
void print_rev(char *s)
{
int i, len;
len = strlen(s);
for (i = len - 1; i >= 0; i--)
{
printf("%c", *(s + i));
}
printf("\n");
}
