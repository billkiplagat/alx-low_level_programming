#include "main.h"
/**
 * binary_to_uint - converts binary to decimal
 * @b: pointer to binary string
 *
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
unsigned int power = 1;
int i;
int len = 0;
if (b == NULL)
return (0);
while (b[len] != '\0')
len++;
for (i = len - 1; i >= 0; i--)
{
if (b[i] == '1')
result += power;
else if (b[i] != '0')
return (0);
power *= 2;
}
return (result);
}
