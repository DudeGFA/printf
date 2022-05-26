#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
int pr_usints(short unsigned int n)
{
    unsigned int k = 1;

    if (n / 10 != 0)
        k += pr_usints(n / 10);
    _putchar((n % 10) + '0');
    return (k);
}
int print_unsints(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    short unsigned int p;

    p = va_arg(ap, unsigned int);
    return (pr_usints(p));
}
int pr_uoints(short unsigned int n)
{
    unsigned int k = 1;

    if (n / 8 != 0)
        k += pr_uoints(n / 8);
    _putchar((n % 8) + '0');
    return (k);
}
int print_octints(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    short unsigned int p;

    p = va_arg(ap, unsigned int);  
    return (pr_uoints(p));
}
