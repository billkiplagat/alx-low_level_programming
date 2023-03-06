#include "main.h"
/**
 * _strchr - function
 * @s: pointer to string value
 * @c: char input
 * Description: the function locates a character in string
 * Return: s or null
*/

char *_strchr(char *s, char c)
{
int i, n;
n = strlen(s);
for (i = 0; i <= n; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}
