#include "main.h"
/**
 * strtow - function to split strings
 * @str: pointer to string
 * Description: the function splits a string and adds a null terminator
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
int len, i, old_i, count = 0, j;
char *separator = " ";
i = 0;
len = strlen(str);
if (str == NULL || str == "")
return (NULL);
while (i < len)
{
/* finds character which is not in separator*/
while (i < len)
{
if (strchr(separator, str[i]) == NULL)
break;
i++;
}
old_i = i;
/* finds character in separator*/
while (i < len)
{
if (strchr(separator, str[i]) != NULL)
break;
i++;
}
if (i > old_i)
count++;
}
/*memory space of array of pointers to strings*/
char **strings = malloc(sizeof(char *) * count);
if (strings == NULL)
{
return (NULL);
}
i = 0;
int index = 0;
char buffer[16000];
while (i < len)
{
while (i < len)
{
if (strchr(separator, str[i]) == NULL)
break;
i++;
}
j = 0;
while (i < len)
{
if (strchr(separator, str[i]) != NULL)
break;
buffer[j] = str[i];
i++;
j++;
}
if (j > 0)
{
buffer[j] = '\0';
int new_str = sizeof(char) * (strlen(buffer) + 1);
strings[index] = malloc(new_str);
strcpy(strings[index], buffer);
index++;
}
}
return (strings);
}
