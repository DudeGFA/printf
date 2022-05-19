#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a char
 * return: prints and return the no of printed char
 */
int _putchar(char c)
{
    return(write(1, &c, 1));
}
