#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/*
 *@format: format to be printed
 *@coll: number of characters printed
 *_printf - a function that produces output according to a format.
 *Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
int coll = 0;
va_list cyn;
va_start(cyn, format);

while (*format != '\0')
{
	if (*format == '%')
	format++;

	if (*format == 'c')
	{
		int m = va_arg(cyn, int);

		putchar(m);
		coll++;
	}
	else if (*format == 's')
	{
		char *s  = va_arg(cyn, *char);

		while (s != '\0')
		{
		putchar(s);
		coll++;
		}
	}
	else if (*format == '%')
	{
		putchar('%');
		coll++;
	}
	else
	{
		putchar(*format);
		coll++;
	}
	format++;
}
va_end(cyn);
return (coll);
}
