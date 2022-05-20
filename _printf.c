#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _print - print all parameters
 * @format: list of types of arguments passed to the function
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, j, n = 0, m = 0;
	printer ss[] = {
		{"s", print_string},{"c", print_char},
		/*{"d", print_decint},{"i", int},
		{"b", print_in_bin},{"u", print_unint},
		{"o", print_octint}, {"x", print_hex},
		{"X", print_uphex}, {"S", print_string},
		{"p", print_addr}, {"R", print_rot13},
		{"r", print_rev},*/
		{NULL, NULL},
	};

	va_start(ap, format);
	for (i = 0; format[i] && format; i++)
	{
		if (format[i] == '%')
		{
			m++;
			j = 0;
			while (j < 2)
			{
				if (*(format + i + 1) == *(ss[j].sign))
				{
					n += ss[j].print(ap, format, i);
				}
				j++;
			}
			i++;
		}
		else
			_putchar(format[i]);
	}
	va_end(ap);
    return ((n - (2 * m)) + (i - 1));
}
