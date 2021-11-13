#include "main.h"
/**
 * _printf - imprime en formato printf
 * @format: puntero
 * Return: retorna el valor
 */
int _printf(const char * const format, ...)
{
	va_list ap;
	int i, j, l = 0;
	int contador = 0;

	va_start(ap, format);
	if (format == NULL)
		exit(98);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; p[j].name; j++)
			{
				if (format[i + 1] == *p[j].name)
					l += p[j].f(ap);
					break;
			}
			if (!p[j].name && format[i + 1] != '\0')
			{
				_putchar(format[i]);
				i--;
				l++;
			}
			if (!p[j].name && format[i + 1] == '\0')
			{
				return (-1);
			}
			i++;
		}
		else if (format[i] != '%')
		{
			_putchar(format[i]);
			contador++;
		}
	}
	va_end(ap);
	return (contador + l);
}
