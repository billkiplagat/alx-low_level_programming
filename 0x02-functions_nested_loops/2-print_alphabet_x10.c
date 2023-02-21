#include "main.h"
/**
 * print_alphabet_x10 -  used to print all alphabets x 10
 * Description: the headers are in the main.c file
 * Return: 0 for now
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char j = 'a';
while (j <= 'z')
{
_putchar(j);
j++;
}
_putchar('\n');
i++;
}
}
