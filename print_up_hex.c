#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
int pr_uuxint(unsigned int n)
{
    unsigned int k = 1;

    if (n / 16 != 0)
        k += pr_uuxint(n / 16);
    if ((n % 16) < 10)
        _putchar(48 + (n % 16));
    else
        _putchar(55 + (n % 16));
    return (k);
}
int print_uphex(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    unsigned int p;

    p = va_arg(ap, unsigned int);
    return (pr_uuxint(p));
}
