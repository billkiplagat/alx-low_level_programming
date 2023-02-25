#include "main.h"
/**
 * print_times_table - function
 * @n: geting number of times
 * Description: function to print times table
 * Return: 0
 */
void print_times_table(int n)
{
int i, j;
if (n >= 15 || n < 0)
{
}
else
{
for (i = 0; i <= n ; i++)
{
for (j = 0; j <= n ; j++)
{
if (j != n)
{
printf("%3d, ", j*i);
}
else
{
printf("%3d", j*i);
}
}
printf("\n");
}
}
}
