#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
int pr_usint(unsigned int n)
{
    unsigned int k = 1;

    if (n / 10 != 0)
        k += pr_usint(n / 10);
    _putchar((n % 10) + '0');
    return (k);
}
int print_unsint(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    unsigned int p;

    p = va_arg(ap, unsigned int);
    return (pr_usint(p));
}
int pr_uoint(unsigned int n)
{
    unsigned int k = 1;

    if (n / 8 != 0)
        k += pr_uoint(n / 8);
    _putchar((n % 8) + '0');
    return (k);
}
int print_octint(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    unsigned int p;

    p = va_arg(ap, unsigned int);
    printf("%u ", p);
    return (pr_uoint(p));
}
