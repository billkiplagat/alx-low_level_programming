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
int i;
for (i = 0; s[i] != '\0'; i++)
{
s++;
if (s[i] == c)
{
return (s);
}
}
return (NULL);
}
