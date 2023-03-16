#include "main.h"
/**
 * string_nconcat - function to concatenate 2 strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bits to copy
 * Description: the function copies s2 to s1 n number of times
 * Return: p pointer to new memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i;
unsigned int len1, len2, l = 0;
char *p;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
l = len1 + len2;
else
l = len1 + n;
p = (char *) malloc(sizeof(char) * l + 1);
if (p == NULL)
return (0);
for (i = 0; i < len1; i++)
{
p[i] = s1[i];
}
for (; i < (len1 + n); i++)
{
p[i] = s2[i - len1];
}
p[i] = '\0';
return (p);
}
