#include "main.h"
/**
 * _strcmp - function
 * @s1: used to get string 1
 * @s2: used to get string 2
 * Description: function to compare 2 strings
 * Return: multiple returns
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (*s1 != '\0' && *s2 != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
return (s1[i] - s1[i]);
}
return (s2[i] - s1[i]);
}
