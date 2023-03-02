#include "main.h"
/**
 * leet - function to encode
 * @s: pointer to a string
 * Description: the function encodes a string
 * Return: s
 */
char *leet(char *s)
{
int i, j;
char *leet_alphabets[] = {"4", "3", "0", "7", "1", "4", "3", "0", "7", "1"};
char alphabets[] = "aeotlAEOTL";
for (i = 0; s[i] != '\0' ; i++)
{
for (j = 0; alphabets[j] != '\0'; j++)
{
if (s[i] == alphabets[j] || s[i] == alphabets[j] - 32)
{
s[i] = *leet_alphabets[j];
break;
}
}
}
return (s);
}
