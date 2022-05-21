#include "main.h"
#include <unistd.h>
#include <stdarg.h>
int pr_uint(int n)
{
    int k = 1;

    if (n / 10 != 0)
        k += pr_uint(n / 10);
    _putchar((n % 10) + '0');
    return (k);
}
int print_int(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    int p;

    p = va_arg(ap, int);
    if (p < 0)
    {
        _putchar('-');
        p = p * (-1);
        return (pr_uint(p) + 1);
    }
    return (pr_uint(p));
}
