#include "main.h"
/**
 * main - execution point
 * @argc: argument count
 * @argv: argument vector
 * Description: The code adds multiple numbers
 * Return: 0
 */
int main(int argc, char *argv[])
{
int number, sum = 0, arg_index, char_index;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (arg_index = 1; arg_index < argc; arg_index++)
{
for (char_index = 0; argv[arg_index][char_index] != '\0'; char_index++)
{
if (!isdigit(argv[arg_index][char_index]))
{
printf("Error\n");
return (1);
}
}
number = atoi(argv[arg_index]);
if (number < 0)
{
printf("Error\n");
return (1);
}
sum += number;
}
printf("%d\n", sum);
return (0);
}
