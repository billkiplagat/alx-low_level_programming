#include "main.h"
/**
 * _strcpy - function to copy strings
 * @dest: destination parameter
 * @src: source parameter
 * Description: the function copies string from src to dest
 * Return: dest_start
 */
char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (dest_start);
}
