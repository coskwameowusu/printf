#include "main.h"

/*
 *@format: format to be printed
 *_printf - a function that produces output according to a format.
 *Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	int coll = 0;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
	if (*format == '%')
	{
		format++;
		if (*format == '\0')
		break;

	if (*format == 'c')
	{
		int m = va_arg(args, int);

		putchar(m);
		coll++;
	}
	else if (*format == 's')
	{
		char *s = va_arg(args, char *);

		while (*s != '\0')
		{
			putchar(*s);
			s++;
			coll++;
		}
	}
	else if (*format == '%')
	{
		putchar('%');
		coll++;
	}
	format++;
        }
	else
	{
		putchar(*format);
		coll++;
		format++;
	}
	}
	va_end(args);
	return (coll);
}

