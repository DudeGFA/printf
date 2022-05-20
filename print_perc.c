#include "main.h"
#include <stdarg.h>
/**
 * print_perc - prints %
 * @ap: va_list
 * @f: parameter
 * @i: parameter
 * Return: int
 */
int print_perc(va_list ap, const char *f __attribute__((unused)), int i)
{
	_putchar('%');
	return (1);
}
