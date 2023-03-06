#include "main.h"
/**
 * _memcpy - function
 * @dest: pointer to destination memory
 * @src: pointer to source
 * @n: number of bytes
 * Description: the function copies n bytes from src to dest
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
