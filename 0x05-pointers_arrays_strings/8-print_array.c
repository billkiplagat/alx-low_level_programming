#include "main.h"
/**
 * print_array - function to print data in an array
 * @a: used to point to the address of the array
 * @n: used to get array size
 * Description: the function loops over the array and prints the values
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n ; i++)
{
if (i != n - 1)
{
printf("%d, ", a[i]);
}
else
{
printf("%d\n", a[i]);
}
}
}
