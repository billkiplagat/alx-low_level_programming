#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * main - execution point
 * @argc: argument count
 * @argv: argument vector
 * Description: the function multiplies two positive numbers
 * Return: 0
 */
int main(int argc, char *argv[])
{
long int num1, num2, sum, i, len1, len2;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
len1 = strlen(argv[1]);
len2 = strlen(argv[2]);
for (i = 0; i < len1; i++)
{
if (!isdigit(argv[1][i]))
{
printf("Error\n");
exit(98);
}
}
for (i = 0; i < len2; i++)
{
if (!isdigit(argv[2][i]))
{
printf("Error\n");
exit(98);
}
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
sum = num1 *num2;
printf("%ld\n", sum);
return (0);
}
