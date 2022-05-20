#include "main.h"
#include <stdarg.h>
/**
 * print_perc - prints %
 * @ap: va_list
 * @f: parameter
 * @i: parameter
 * Return: int
 */
int print_perc(va_list ap __attribute__((unused)), const char *f __attribute__((unused)), int i)
{
	_putchar('%');
	return ((i * 0) + 1);
}
