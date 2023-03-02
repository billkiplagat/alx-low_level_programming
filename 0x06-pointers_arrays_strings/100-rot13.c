#include "main.h"
/**
 * rot13 - function to encode string
 * @str: pointer to string
 * Description: the function encodes a string with rot13
 * Return: encoded
 */
char *rot13(char *str)
{
char *encoded = str;
int i;
for (i = 0; encoded[i] != '\0'; i++)
{
for (; encoded[i] >= 'a' && encoded[i] <= 'z' ; i++)
{
encoded[i] = ((encoded[i] - 'a' + 13) % 26) + 'a';
}
if (encoded[i] >= 'A' && encoded[i] <= 'Z')
{
encoded[i] = ((encoded[i] - 'A' + 13) % 26) + 'A';
}
}
return (encoded);
}
