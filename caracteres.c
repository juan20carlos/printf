#include "main.h"
/**
 * print_char - imprime el caracter
 * @c: argumento
 *Return: 1
 */
int print_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}
/**
 * print_str - imprime caracter
 * @s: argumento
 * Return: i
 */
int print_str(va_list s)
{
	char *str = va_arg(s, char *);
	int i = 0;

	if (str == NULL)
	{
		str = "(nill)";
	}
	i = print_chars(str);
	return (i);
}
/**
 * print_porc - funcion imprime el %
 * @p: variable
 * Return: 1
 */
int print_porc(va_list __attribute__((unused)) p)
{
	_putchar('%');
	return (1);
}
