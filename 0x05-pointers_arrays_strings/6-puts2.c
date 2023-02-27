#include "main.h"
/**
 * puts2 - function to print chars
 * @str: to get chars input
 * Description: the function prints every next char
 */
void puts2(char *str)
{
int i, len;
len = strlen(str);
for (i = 0; i < len; i++)
{
if (i % 2 == 0)
{
printf("%c", str[i]);
}
}
printf("\n");
}
