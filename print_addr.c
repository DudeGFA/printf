#include "main.h"
int print_addr(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    unsigned int p;

    p = va_arg(ap, int);
    _putchar('0');
    _putchar('x');
    return ((pr_uuxint(p)) + 2);
}
