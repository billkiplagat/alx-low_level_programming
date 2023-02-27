#include "main.h"
/**
 * puts_half - function to print half chars
 * @str: to get char inputs
 * Description: the function prints half of the string
 */
void puts_half(char *str)
{
int i, mid, len;
len = strlen(str);
mid = ceil(len / 2.0);
for (i = mid; i <= len - 1; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
