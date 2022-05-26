#include "main.h"
int print_addr(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    char *p;
    p = va_arg(ap, char *);
    printf("%p", p);
   /* for (l = 0; p[l]; l++)
        _putchar[p[l]];*/
    write(1, p, 16);
    return (16);
}
