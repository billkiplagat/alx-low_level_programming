#include "main.h"
#include <stdio.h>
/**
 * main - execution point
 * @argc: argument count
 * @argv: argument vector
 * Description: the function multiplies two positive numbers
 * Return: 0
 */
int main(int argc, char *argv[])
{
int num1, num2, sum;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
sum = num1 *num2;
printf("%d\n", sum);
return (0);
}
