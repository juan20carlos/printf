#include "main.h"
/**
 * print_int - print type int
 * @i: pointer to argument
 * Return: Nothing
 */
int print_int(va_list i)
{
	int j = (va_arg(i, int));

	print_number_flag(j, 0);
	return (count_digit_base_flag(j, 10, 0));
}
/**
 * print_dec - print type decimal
 * @d: pointer to argument
 * Return: Nothing
 */
int print_dec(va_list d)
{
	int i = va_arg(d, int);

	print_number_flag(i, 0);
	return (count_digit_base_flag(i, 10, 0));
}
