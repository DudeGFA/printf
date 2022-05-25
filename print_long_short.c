#include "main.h"
/**
 * print_long - prints long ints
 * @ap: va_list
 * @format: param
 * @i: param
 */
int print_long(va_list ap __attribute__((unused)),const char *format , int i)
{
    int j;

    printer sd[] = {
	{"d", print_intl},{"i", print_intl},
        {"u", print_unsintl},{"o", print_octintl},
        {"x", print_hexl},{"X", print_uphexl}
	};
    for (j = 0; j < 6; j++)
	{
		if (*(format + i + 2) == *(sd[j].sign))
			return(sd[j].print(ap, format, i));
    	}
    _putchar('%');
    return (1);
}
/**
 * print_short - prints long ints
 * @ap: va_list
 * @format: param
 * @i: param
 */
int print_short(va_list ap __attribute__((unused)),const char *format , int i)
{
    int j;

    printer sh[] = {
	{"d", print_ints},{"i", print_ints},
        {"u", print_unsints},{"o", print_octints},
        {"x", print_hexs},{"X", print_uphexs}
	};
    for (j = 0; j < 6; j++)
	{
		if (*(format + i + 2) == *(sh[j].sign))
			return(sh[j].print(ap, format, i));
    	}
    _putchar('%');
    return (1); 
}
