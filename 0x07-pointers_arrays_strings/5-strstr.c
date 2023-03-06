 #include "main.h"
/**
 * _strstr - function
 * @haystack: pointer to string value
 * @needle: points to the substring
 * Description: the function locates a substring and returns
 * Return: haystack or Null
*/
char *_strstr(char *haystack, char *needle)
{
int i, match, j;
int n = strlen(haystack);
int n2 = strlen(needle);
for (i = 0; i < n; i++)
{
if (haystack[i] == needle[0])
{
match = 1;
for (j = 1; j < n2; j++)
{
if (i + j >= n || haystack[i + j] != needle[j])
{
match = 0;
break;
}
}
if (match)
{
return (&haystack[i]);
}
}
}
return (NULL);
}
