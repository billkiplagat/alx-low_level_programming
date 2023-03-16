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
unsigned int len1 = 0, len2 = 0;
char *p;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
if (n >= len2)
n = len2;
p = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
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
