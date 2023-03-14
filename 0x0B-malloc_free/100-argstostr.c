#include "main.h"
/**
 * argstostr - function to print splited string
 * @ac: argument count
 * @av: pointer to argument pointer
 * Description: the function uses strtok to split strings
 * Return: new_mem pointer
 */
char *argstostr(int ac, char **av)
{
int i, j, k;
char *new_mem;
int total_len = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j])
{
total_len++;
j++;
}
total_len++;
}
new_mem = malloc(total_len *sizeof(char));
if (new_mem == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++, k++)
{
j = 0;
while (av[i][j])
{
new_mem[k] = av[i][j];
j++;
k++;
}
new_mem[k] = '\n';
}
new_mem[k] = '\0';
return (new_mem);
}
