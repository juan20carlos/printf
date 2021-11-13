#include "main.h"
/**
 * _len: la longitud de una cadena
 * @s: comprueba la cadena
 * Return: always 0
 */
int _len(char *s)
{
	int leng = 0;

	while (s[leng] != '\0')
		leng++;
	return (leng);
}
/**
 * print_chars - imprimir caracteres
 * @str: cadena pasada
 * Return: len str
 */
int print_chars(char *str)
{
	int i = 0;

	if (str)
	{
		while (*str)
		{
			_putchar(*str);
			str++;
			i++;
		}
	}
	return (i);
}
/**
 * rev_string - Función que invierte una cadena
 * @s: cadena
 * Return: nada
 */
void rev_string(char *s)
{
	int i, j, k;
	char c[1024];
	char *p = c;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; --j)
	{
		p[i - j - 1] = *(s + j);
	}
	for (k = 0; k <= i - 1; k++)
	{
		s[k] = p[k];
	}
}
/**
 *  print_number_flag - Imprime un número primo
 *  @n: marque n
 * @flag: indicador de bandera
 * Return: 1 si el entero de entrada es un número primo
 */
void print_number_flag(int n, int flag)
{
	unsigned int n1;

	if (n < 0 && flag == 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else if (n < 0 && flag == 1)
	{
		n1 = UINT_MAX + n + 1;
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_number_flag(n1 / 10, flag);
	}
	_putchar((n1 % 10) + '0');
}
/**
 * count_digit_base_flag - Dígitos de recuento de funciones
 * @i: Marque i
 * @base: comprobar base
 *  @flag: indicador de bandera (ej. "% d" -> 0, "% u" -> 1)
 * Return: i
 */
int count_digit_base_flag(int i, int base, int flag)
{
	unsigned int j = 0;
	unsigned int k;

	if (i == 0)
	{
		return (1);
	}
	if (i < 0 && flag == 0)
	{
		k = i * -1;
		j++;
	}
	else if (i < 0 && flag == 1)
	{
		k = UINT_MAX + i + 1;
	}
	else
		k = i;
	while (k != 0)
	{
		k /= base;
		j++;
	}
	return (j);
}
