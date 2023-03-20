#include <stdio.h>
#include <libgen.h>
/**
 * main - execution point
 * Ddescription: function to print file name
 * Return: 0
 */
int main(void)
{
printf("%s\n", basename(__FILE__));
return (0);
}
