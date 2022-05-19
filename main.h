#ifndef _main_h
#define _main_h
#include <stdarg.h>
/**
 * struct prints_all - prints_all
 * @sign: represents data type
 * @print: a pointer function
 */
typedef struct prints_all
{
	char *sign;
	void (*print)(va_list ap, char *, int);
} printer;
int _printf(const char *format, ...);
#endif /* main.h */
