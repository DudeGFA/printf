#include "main.h"
#include <stdarg.h>
/**
 * _print - print all parameters
 * @format: list of types of arguments passed to the function
 * Return: void
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, j;
	printer ss[] = {
		{"c", print_char}, {"i", print_int},
		{"d", print_decint},{"s", print_string},
		{"b", print_in_bin},{"u", print_unint},
		{"o", print_octint}, {"x", print_hex},
		{"X", print_uphex}, {"S", print_string},
		{"p", print_addr}, {"R", print_rot13},
		{"r", print_rev}, {NULL, NULL},
	};

	va_start(ap, format);
	for (i == 0; format[i] && format; i++)
	{
		if (format[i] == "%")
		{
				j = 0;
				while (j < 4)
				{
					if (*(format + i) == *(ss[j].sign))
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
