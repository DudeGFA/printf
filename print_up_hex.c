#include "main.h"
int print_uphex(va_list ap, const char *format __attribute__((unused)), int i __attribute__((unused)))
{
    long decimalnum, quotient, remainder;
    int d, j = 0;
    char hexadecimalnum[100];
    decimalnum = va_arg(ap, int);
    quotient = decimalnum;
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }
    for (d = (j - 1); d >= 0; d--)
            _putchar(hexadecimalnum[d]);
    return (j);
}
