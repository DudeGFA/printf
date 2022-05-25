#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
int pr_uintl(long int n)
{
    int k = 1;

    if (n / 10 != 0)
        k += pr_uintl(n / 10);
    _putchar((n % 10) + '0');
    return (k);
}
int print_intl(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    long int p;

    p = va_arg(ap, long int);
    if (p < 0)
    {
        _putchar('-');
        p = p * (-1);
        return (pr_uintl(p) + 1);
    }
    return (pr_uintl(p));
}
int pr_uints(short int n)
{
    int k = 1;

    if (n / 10 != 0)
        k += pr_uints(n / 10);
    _putchar((n % 10) + '0');
    return (k);
}
int print_ints(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    short int p;

    p = va_arg(ap, int);
    if (p < 0)
    {
        _putchar('-');
        p = p * (-1);
        return (pr_uints(p) + 1);
    }
    return (pr_uints(p));
}
