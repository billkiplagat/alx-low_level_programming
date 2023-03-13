#include "main.h"
/**
 * create_array - function to assign value to array
 * @size: array size input
 * @c: character to be assign to array
 * Description: the function assign c char size number of times
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
char *array = (char *) malloc(sizeof(char) * size);
if (array != NULL)
{
memset(array, c, size);
}
return (array);
}
