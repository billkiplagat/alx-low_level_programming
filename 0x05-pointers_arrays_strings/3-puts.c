#include "main.h"
/**
 * _puts - function to print characters
 * @str: used to get char inputs
 * Description: used to print a string of chars
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0' ; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
