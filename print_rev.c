#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @ap: va_list
 * @format: parameter
 * @i: parameter
 */
int print_rev(va_list ap __attribute__((unused)),const char *format __attribute__((unused)), int i __attribute__((unused)))
{
	char *str;
	int y, b;

	str = va_arg(ap, char *);
	for (y = 0; str[y]; y++)
		b = y;
	for (y--; y >= 0; y--)
		_putchar(str[y]);
	return (b);
}