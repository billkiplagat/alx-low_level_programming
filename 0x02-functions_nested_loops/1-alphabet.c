#include "main.h"
/**
 * print_alphabet -  used to print all alphabets
 * Description: the headers are in the main.c file
 * Return: 0 for now
 */

void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
