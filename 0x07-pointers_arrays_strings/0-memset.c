#include "main.h"
/**
 * _memset - function
 * @s: string pointer
 * @b: constant byte input
 * @n: number of bytes
 * Description: function to fill memory with constant bytes
 * Return: s;
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*s = b;
s++;
}
return (s);
}
