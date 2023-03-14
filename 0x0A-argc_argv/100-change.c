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
int number, i, results;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
number = atoi(argv[1]);
results = 0;
if (number < 0)
{
printf("0\n");
}
for (i = 0; i < 5 && number >= 0; i++)
{
while (number >= coins[i])
{
results++;
number -= coins[i];
}
}
printf("%d\n", results);
return (0);
}
