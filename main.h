#ifndef _main_h
#define _main_h
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
/**
 * struct prints_all - prints_all
 * @sign: represents data type
 * @print: a pointer function
 */
typedef struct prints_all
{
	char *sign;
	int (*print)(va_list ap, const char *, int);
} printer;
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap, const char *, int);
int print_string(va_list ap, const char *format, int i);
int print_perc(va_list ap, const char *format, int i);
#endif /* main.h */
