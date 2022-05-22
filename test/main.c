#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int main()
{
    int b, a;
    void *addr;
    addr = (void *)0x7ffe637541f0;;
    /*int l = INT_MAX;*/
    a = printf("%p\n", addr);
    b = _printf("%p\n", addr);
    printf("%d %d\n", a,b);

    return (0);
}
