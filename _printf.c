#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _print - print all parameters
 * @format: list of types of arguments passed to the function
 * Return: void
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, j;
	printer ss[] = {
		{"c", print_char}, /*{"i", print_int},
		{"d", print_decint},{"s", print_string},
		{"b", print_in_bin},{"u", print_unint},
		{"o", print_octint}, {"x", print_hex},
		{"X", print_uphex}, {"S", print_string},
		{"p", print_addr}, {"R", print_rot13},
		{"r", print_rev},*/
		{NULL, NULL},
	};

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
				j = 0;
				while (j < 1)
				{
					if (*(format + i + 1) == *(ss[j].sign))
					{
						ss[j].print(ap, format, i);
					}
					j++;
				}
				i++;
		}
		else
			_putchar(format[i]);
	}
	va_end(ap);
    return (0);
}
