#include "main.h"
/**
 * _strpbrk - function
 * @s: pointer to string value
 * @accept: gets bytes
 * Description: the function searches for a string
 * Return: s + i or Null
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
return (s + i);
}
}
}
return (NULL);
}
