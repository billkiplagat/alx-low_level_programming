#include "main.h"
/**
 * _strncat - function
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of bytes
 * Description: function appends src to dest n number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *p = dest;
while (*p != '\0')
{
p++;
}
while (n-- > 0 && *src != '\0')
{
*p++ = *src++;
}
*p = '\0';
return (dest);
}
