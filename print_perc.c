#include "main.h"
#include <stdarg.h>
/**
 * print_perc - prints %
 * @ap: va_list
 * @f: parameter
 * @i: parameter
 * Return: int
 */
int print_perc(va_list ap __attribute__((unused)), const char *, int)
{
	_putchar('%');
	return (1);
}
