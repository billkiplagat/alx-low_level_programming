#include "variadic_functions.h"
/**
* print_all - print all strings in CL
* @format: pointer to char of formats
*
*/
void print_all(const char *const format, ...)
{
va_list args;
int i, num_args = 0;
char *string;
double f;
char c;
int n;
va_start(args, format);
i = 0;
while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
{
c = va_arg(args, int);
printf("%c", c);
break;
}
case 'i':
{
n = va_arg(args, int);
printf("%d", n);
break;
}
case 'f':
{
f = va_arg(args, double);
printf("%f", f);
break;
}
case 's':
string = va_arg(args, char *);
if (string == NULL)
printf("(nil)");
printf("%s", string);
break;
}
if (num_args > 0 && format[i + 1] != '\0')
printf(", ");
num_args++;
i++;
}
va_end(args);
printf("\n");
}
