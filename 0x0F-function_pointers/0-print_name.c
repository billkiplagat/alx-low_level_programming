#include "function_pointers.h"
/**
 * print_name - function to print a name
 * @name: pointer to name
 * @f: A pointer to a function that prints a name
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	return;
(*f)(name);
}
