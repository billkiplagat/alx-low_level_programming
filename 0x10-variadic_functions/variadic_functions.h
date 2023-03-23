#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
/**
 * struct printer - struct type defining a printer.
 * @symbol: representing data type.
 * @print: function pointer to a function
 */
typedef struct print
{
char *symbol;
void (*print)(va_list args);
}print_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
