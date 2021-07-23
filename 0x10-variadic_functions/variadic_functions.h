#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
/**
 * struct printTypeStruct - structure definition of a printTypeStruct
 *
 * @t: 1st parameter and is a type
 *
 * @func: 2nd parameter and is a function to print
 */
typedef struct printTypeStruct
{
  char *t;
  void (*func)(va_list);
} printTypeStruct;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

void print_int(va_list list);
void print_float(va_list list);
void print_char(va_list list);
void print_str(va_list list);
#endif
