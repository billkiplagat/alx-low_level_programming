#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#define NULL ((void *)0)
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int _putchar(char c);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
