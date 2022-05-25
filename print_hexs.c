#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
int pr_uuxints(short unsigned int n)
{
    unsigned int k = 1;

    if (n / 16 != 0)
        k += pr_uuxints(n / 16);
    if ((n % 16) < 10)
        _putchar(48 + (n % 16));
    else
        _putchar(55 + (n % 16));
    return (k);
}
int print_uphexs(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    short unsigned int p;

    p = va_arg(ap, unsigned int);
    return (pr_uuxints(p));
}
int pr_uxints(short unsigned int n)
{
    unsigned int k = 1;

    if (n / 16 != 0)
        k += pr_uxints(n / 16);
    if ((n % 16) < 10)
        _putchar(48 + (n % 16));
    else
        _putchar(87 + (n % 16));
    return (k);
}
int print_hexs(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    short unsigned int p;

    p = va_arg(ap, unsigned int);
    return (pr_uxints(p));
}
