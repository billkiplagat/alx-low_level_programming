#include "variadic_functions.h"
/**
* print_char - print all chars in CL
* @args: list of arguments
*
*/
void print_char(va_list args)
{
char c;
c = va_arg(args, int);
printf("%c", c);
}
/**
* print_int - print all integer numbers in CL
* @args: list of arguments
*
*/
void print_int(va_list args)
{
int num;
num = va_arg(args, int);
printf("%d", num);
}
/**
* print_float - print all float numbers in CL
* @args: list of arguments
*
*/
void print_float(va_list args)
{
float f;
f = va_arg(args, double);
printf("%f", f);
}
/**
* print_string - print all strings in CL
* @args: list of arguments
*
*/
void print_string(va_list args)
{
char *str;
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}
/**
* print_all - print all strings in CL
* @format: pointer to char of formats
*
*/
void print_all(const char *const format, ...)
{
va_list args;
int i = 0, j;
char *separator = "";
print_t funcs[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string}
};
va_start(args, format);
while (format && (*(format + i)))
{
j = 0;
while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
j++;
if (j < 4)
{
printf("%s", separator);
funcs[j].print(args);
separator = ", ";
}
i++;
}
printf("\n");
va_end(args);
}
