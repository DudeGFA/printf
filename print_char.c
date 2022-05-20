#include "main.h"
#include <unistd.h>
/**
 * print_char - prints a char
 * @ap: va_list
 * @f: parameter
 * @i: parameter
 * Return: int
 */
int print_char(va_list ap, const char *f __attribute__((unused)), int i __attribute__((unused)))
{
	char c;

	c = va_arg(ap, int);
	_putchar(c);
	return (1);
}
