#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int main()
{
    printf("school  i%c f%s\n", 's', "un");
    _printf("school i%% %c very f%s\n", 'a', "un");
    return (0);
}
