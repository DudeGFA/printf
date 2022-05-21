#include "main.h"
#include <unistd.h>
#include <stdarg.h>
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
    char *f;

    p = va_arg(ap, char*);
    if (p == (char *)0)
    {
        f = "(null)";
        for(k = 0; f[k]; k++)
            _putchar(f[k]);
        return(6);
    }
    for (k = 0; *(p + k); k++)
        _putchar(*(p + k));
    return (k);
}
