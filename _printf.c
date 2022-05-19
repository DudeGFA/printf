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
	char *separator = "";
	printer ss[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);
	for (i == 0; format[i] && format; i++)
		if(format[i] == "\" && format[i - 1] != "\")
		   	continue;
		if (format[i] == "%" && format[[i - 1] != "\")
				j = 0;
				while (j < 4)
				{
					if (*(format + i) == *(ss[j].sign))
					{
						ss[j].print(ap);
					}
					j++;
				}
				i++;
		else
			write(1, format[i], 1);
	va_end(ap);
	printf("\n");
}
