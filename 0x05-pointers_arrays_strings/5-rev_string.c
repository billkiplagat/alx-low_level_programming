#include "main.h"
/**
 * rev_string - function prints strings
 * @s: used to get inputs
 * Description: the function is used to reverse a string
 */
void rev_string(char *s)
{
int i;
char temp;
int len = strlen(s);
for (i = 0; i < len / 2 ; i++)
{
temp = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = temp;
}
}
