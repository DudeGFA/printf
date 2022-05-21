#include "main.h"
#include <stdlib.h>

/**
 * check_for_specifiers - checks if there is a valid format specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */
static int (*check_for_specifiers(const char *format))(va_list)
{
	unsigned int i;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"u", print_u},
		{"b", print_b},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}

/**
 * _printf - prints anything by sAM AND ESTHER
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, j, m = 0, n = 0, ck = 0;
	printer ss[] = {
		{"s", print_string},{"c", print_char},
		{"d", print_int},{"i", print_int},
		/*{"b", print_in_bin},{"u", print_unint},
		{"o", print_octint}, {"x", print_hex},
		{"X", print_uphex}, {"S", print_string},
		{"p", print_addr}, {"R", print_rot13},
		{"r", print_rev},*/
		{"%", print_perc}
	};

	if (format == NULL)
		return (-1);
	va_start (ap, format);
	for (i = 0; format[i] && format; i++)
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			for (j = 0; j < 5; j++)
			{
				if (*(format + i + 1) == *(ss[j].sign))
				{
					m += ss[j].print(ap, format, i);
					n++;
					i++;
					break;
				}
				if (j == 4)
					ck++;
			}
		}
		else
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		f = check_for_specifiers(&format[i + 1]);
		if (f != NULL)
		{
			count += f(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end (ap);
	return ((i - (n * 2)) + m - ck);
}
