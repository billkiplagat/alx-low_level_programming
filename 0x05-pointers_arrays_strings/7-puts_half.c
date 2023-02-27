#include "main.h"
/**
 * puts_half - function to print half chars
 * @str: to get char inputs
 * Description: the function prints half of the string
 */
void puts_half(char *str)
{
int i, len;
len = strlen(str);
for (i = len / 2; i <= len - 1; i++)
{
if (str != '\0')
{
printf("%c", str[i]);
}
}
printf("\n");
}
