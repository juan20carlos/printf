#ifndef _JUAN_CARLOS_
#define _JUAN_CARLOS_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
/**
 * struct my_printf - Nuestro printf
 * @name: especificador de conversión
 * @f: comprobar
 */
typedef struct my_printf
{
	char *name;
	int (*f)(va_list);
} print_t;

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
int print_dec(va_list d);
int print_int(va_list i);
static const print_t p[] = {
	{"c", print_char},
	{"s", print_str},
	{"d", print_dec},
	{"i", print_int},
	{"%", print_porc},
	{NULL, NULL}
	};

#endif
