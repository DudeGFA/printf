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
int print_int(va_list ap, const char *format, int i);
int print_in_bin(va_list ap, const char *format, int i);
int print_octint(va_list ap, const char *format, int i);
int print_unsint(va_list ap, const char *format, int i);
int print_hex(va_list ap, const char *format, int i);
int print_uphex(va_list ap, const char *format, int i);
int print_stringx(va_list ap, const char *format, int i);
int print_addr(va_list ap, const char *format, int i);
int print_rot13(va_list ap, const char *format, int i);
int print_rev(va_list ap, const char *format, int i);
int print_long(va_list ap, const char *format, int i);
int print_short(va_list ap, const char *format, int i);
int print_intl(va_list ap, const char *format, int i);
int print_octintl(va_list ap, const char *format, int i);
int print_hexl(va_list ap, const char *format, int i);
int print_uphexl(va_list ap, const char *format, int i);
int print_unsintl(va_list ap, const char *format, int i);
int print_ints(va_list ap, const char *format, int i);
int print_octints(va_list ap, const char *format, int i);
int print_hexs(va_list ap, const char *format, int i);
int print_uphexs(va_list ap, const char *format, int i);
int print_unsints(va_list ap, const char *format, int i);
#endif /* main.h */
