#include "main.h"
/**
 * main - execution point
 * @argc: number of command line arguments
 * @argv: number of strings
 * Description: the code prints the number of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
