#include "main.h"
int pr_uuxstr(char n)
{
    unsigned int k = 1;

    if (n / 16 != 0)
        k += pr_uuxstr(n / 16);
    if ((n % 16) < 10)
        _putchar(48 + (n % 16));
    else
        _putchar(55 + (n % 16));
    return (k);
}
int print_stringx(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    char *p;
    int m = 0;

    p = va_arg(ap, char*);
    for (i = 0; p[i]; i++)
    {
        if (((0 < p[i]) && (p[i] < 32)) || (p[i]>= 127))
        {
            _putchar('\\');
            _putchar('x');
            if (p[i] <= 15)
                _putchar('0');
            pr_uuxstr(p[i]);
            m = m + 4;
        }
        else
        {
            _putchar(p[i]);
            m++;
        }
    }
    return (m);
}
