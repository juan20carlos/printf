#ifndef _JUAN_CARLOS_
#define _JUAN_CARLOS_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
/**
 *
 *
 *
 */
typedef struct my_printf
{
	char *name;
	int (*f)(va_list);
}print_t;

int _printf(const char *format, ...);
int print_char(va_list c);
int print_str(va_list s);
int print_porc(va_list __attribute__((unused)) p);
int _putchar(char c);
int print_chars(char *str);
int _len(char *s);
int print_chars(char *str);
void rev_string(char *s);
void print_number_flag(int n, int flag);
int count_digit_base_flag(int i, int base, int flag);

static const print_t p[] = {
	{"c", print_char},
	{"s", print_str},
	{"%", print_porc},
	{NULL,NULL}
	};

#endif
