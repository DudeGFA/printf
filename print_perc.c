#include "main.h"
#include <stdarg.h>
/**
 * print_perc - prints % 
 * @ap: va_list
 * @format: parameter
 * @i: parameter
 * Return: int 
 */
int print_perc(va_list ap __attribute__((unused)),const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    _putchar('%');
    return (1);
}
