#include "main.h"
#include <unistd.h>
/**
 * print_string - prints a string
 * 
 * @ap: variable list 
 * @format: parameter
 * Return: no of printed letters
 */
int print_string(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
	char *p;
	int k;

	p = va_arg(ap, char*);
	for (k = 0; p[k]; k++)
	{
		_putchar(p[k]);
	}
	return (0);
}
