#include "main.h"
/**
 * _strcat - function
 * @dest: used to get destination string
 * @src: to get source string
 * Description: the function appends src to dest
 * Return: dest value
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
while (*ptr)
{
ptr++;
}
while (*src)
{
*ptr++ = *src++;
}
*ptr = '\0';
return (dest);
}
