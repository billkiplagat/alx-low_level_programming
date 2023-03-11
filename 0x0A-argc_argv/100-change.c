#include "main.h"
/**
 * main - execution point
 * @argc: argument count
 * @argv: argument vector
 * Description: the function prints the minimal number of coins
 * Return: 0
 */
int main(int argc, char *argv[])
{
int number, i, coins, num_denominations;
int denominations[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
number = atoi(argv[1]);
if (number < 0)
{
printf("0\n");
}
coins = 0;
num_denominations = sizeof(denominations) / sizeof(denominations[0]);
for (i = 0; i < num_denominations; i++)
{
while (number >= denominations[i])
{
number -= denominations[i];
coins++;
}
}
printf("%d\n", coins);
return (0);
}
