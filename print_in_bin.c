#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
int pr_bint(unsigned int n)
{
    unsigned int k = 1;

    if (n / 2 != 0)
        k += pr_bint(n / 2);
    _putchar((n % 2) + '0');
    return (k);
}
int print_in_bin(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    unsigned int p;

    p = va_arg(ap, unsigned int);  
    return (pr_bint(p));
}
