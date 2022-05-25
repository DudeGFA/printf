#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
int pr_uuxintl(long unsigned int n)
{
    unsigned int k = 1;

    if (n / 16 != 0)
        k += pr_uuxintl(n / 16);
    if ((n % 16) < 10)
        _putchar(48 + (n % 16));
    else
        _putchar(55 + (n % 16));
    return (k);
}
int print_uphexl(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    long unsigned int p;

    p = va_arg(ap, long unsigned int);
    return (pr_uuxintl(p));
}
int pr_uxintl(long unsigned int n)
{
    unsigned int k = 1;

    if (n / 16 != 0)
        k += pr_uxintl(n / 16);
    if ((n % 16) < 10)
        _putchar(48 + (n % 16));
    else
        _putchar(87 + (n % 16));
    return (k);
}
int print_hexl(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    long unsigned int p;

    p = va_arg(ap, long unsigned int);
    return (pr_uxintl(p));
}
