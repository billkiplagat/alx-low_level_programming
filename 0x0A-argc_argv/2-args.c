#include "main.h"
/**
 * main - execution point
 * @argc: argument count
 * @argv: argument vector
 * Description: function to print all arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n",  argv[i]);
}
return (0);
}
