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
int i, j;
char *new_mem;
char *token;
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
j = 0;
for (i = 0; i < ac; i++)
{
strcpy(&new_mem[j], av[i]);
j += strlen(av[i]);
new_mem[j++] = ' ';
}
new_mem[j] = '\0';
token = strtok(new_mem, " ");
while (token != NULL)
{
printf("%s\n", token);
token = strtok(NULL, " ");
}
return (new_mem);
}
