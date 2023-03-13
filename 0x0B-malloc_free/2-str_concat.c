#include "main.h"
/**
 * str_concat - function to concatenate 2 strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Description: the function uses strcat to concatenate s2 to s1
 * Return: pointer to new memory
 */
char *str_concat(char *s1, char *s2)
{
size_t s1_len, s2_len;
char *new_mem;
s1_len = strlen(s1);
s2_len = strlen(s2);
new_mem = malloc((s1_len + s2_len) +1);
if (new_mem == NULL)
{
return (NULL);
}
strcpy(new_mem, s1);
strcat(new_mem, s2);
return (new_mem);
}
