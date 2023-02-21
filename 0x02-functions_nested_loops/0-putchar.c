#include "main.h"
/**
 * main -  execution point
 * Description: the headers are in the main.c file
 * Return: 0 for now
 */
int main(void)
{
char str[] = "_putchar\n";
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
return (0);
}
