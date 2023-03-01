#include "main.h"
/**
 * string_toupper - function
 * @str: to get string input
 * Description: the function convert lowercase to upper
 * Return: str
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 'a' + 'A';
}
}
return (str);
}
