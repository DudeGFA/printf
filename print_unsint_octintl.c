#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
int pr_usintl(long unsigned int n)
{
    unsigned int k = 1;

    if (n / 10 != 0)
        k += pr_usintl(n / 10);
    _putchar((n % 10) + '0');
    return (k);
}
int print_unsintl(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    long unsigned int p;

    p = va_arg(ap, long unsigned int);
    return (pr_usintl(p));
}
int pr_uointl(long unsigned int n)
{
    unsigned int k = 1;

    if (n / 8 != 0)
        k += pr_uointl(n / 8);
    _putchar((n % 8) + '0');
    return (k);
}
int print_octintl(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    long unsigned int p;

    p = va_arg(ap, long unsigned int);  
    return (pr_uointl(p));
}
