#include "main.h"
/**
 * cap_string - function to capitalize string
 * @p: to get string inputs
 * Description: the function capitalize first char in a word
 * Return: p
 */
char *cap_string(char *p)
{
int i, word = 1;
for (i = 0; p[i] != '\0'; i++)
{
if (word && p[i] >= 'a' && p[i] <= 'z')
{
p[i] = p[i] - 'a' + 'A';
}
if ((p[i] == ' ' || p[i] == '\t' || p[i] == '\n' ||
p[i] == ',' || p[i] == ';' || p[i] == '.' ||
p[i] == '!' || p[i] == '?' || p[i] == '"' ||
p[i] == '(' || p[i] == ')' || p[i] == '-'
|| p[i] == '{' || p[i] == '}'))
{
word = 1;
}
else
{
word = 0;
}
}
return (p);
}
