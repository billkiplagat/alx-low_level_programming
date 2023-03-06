#include "main.h"
/**
 * _strspn - function
 * @s: pointer to string value
 * @accept: gets bytes
 * Description: the function return number of bytes in accept
 * Return: num
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j, num = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
num++;
break;
}
}
if (accept[i] == '\0')
{
break;
}
}
return (num);
}
