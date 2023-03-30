#include "lists.h"
void __attribute__((constructor)) print_hello(void);
/**
 * print_hello - function uses constructor to run before main
 *
 */
void print_hello(void)
{
printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
