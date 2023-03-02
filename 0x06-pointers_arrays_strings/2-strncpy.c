#include "main.h"
/**
 * _strncpy - function to copy strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: number integer
 * Description: the function copies the source n number of time
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
