#include "main.h"
/**
 * print_rot13 - prints a string in reverse
 * @ap: va_list
 * @format: parameter
 * @i: parameter
 */
int print_rot13(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    int h;
    char *arg;

    arg = va_arg(ap, char *);
    for (h = 0; arg[h]; h++)
    {
        if (arg[h] >= 'A' && arg[h] <= 'M')
            _putchar(arg[h] + 13);
        else if (arg[h] >= 'a' && arg[h] <= 'm')
            _putchar(arg[h] + 13);
        else if (arg[h] >= 'N' && arg[h] <= 'Z')
            _putchar(arg[h] - 13);
        else if (arg[h] >= 'n' && arg[h] <= 'z')
            _putchar(arg[h] - 13);
        else
            _putchar(arg[h]);
    }
    return (h);
}
