#include "main.h"
/**
 * cap_string - function to capitalize string
 * @p: to get string inputs
 * Description: the function capitalize first char in a word
 * Return: p
 */
char *cap_string(char *p)
{
int i;
i = 0;
while (p[i] != '\0')
{
if (p[0] >= 97 && p[0] <= 122)
{
p[i] = p[i] - 'a' + 'A';
}
if (p[i] == ' ' || p[i] == '\t' || p[i] == '\n'
|| p[i] == ',' || p[i] == ';' || p[i] == '.'
|| p[i] == '.' || p[i] == '!' || p[i] == '?'
|| p[i] == '"' || p[i] == '(' || p[i] == ')'
|| p[i] == '{' || p[i] == '}')
{
if (p[i + 1] >= 97 && p[i + 1] <= 122)
{
p[i + 1] = p[i + 1] - 32;
}
}
i++;
}
return (p);
}
