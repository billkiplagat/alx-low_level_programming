#include "main.h"
/**
 * _strdup - function to return pointer to new memory
 * @str: pointer to string
 * Description: the code copies a string to another memory
 * Return: NULL or newstr
 */
char *_strdup(char *str)
{
size_t len;
char *newstr;
if (str == NULL)
{
return (NULL);
}
len = strlen(str);
newstr = malloc(len + 1);
if (newstr == NULL)
{
return (NULL);
}
strcpy(newstr, str);
return (newstr);
}
