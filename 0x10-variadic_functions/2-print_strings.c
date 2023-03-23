#include "variadic_functions.h"
/**
 * print_strings - print all strings in CL
 * @n: arguments number
 * @separator: char separator for numbers
 *
 */
void print_strings(const char *separator, const unsigned int n, ...) {
unsigned int i;
char *string;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
string = va_arg(args, char *);
if (string == NULL)
printf("(nil)");
else
printf("%s", string);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
