#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: The format string.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	int coll = 0;
	va_list args;

	va_start(args, format);

	for (; *format; format++)
	{
		if (*format == '%' && format[1])
		{
			format++;
			if (*format == 'c')
				coll += putchar(va_arg(args, int));
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);

				for (; *s; coll++, s++)
					putchar(*s);
			}
			else if (*format == '%')
				coll += putchar('%');
		}
		else
			coll += putchar(*format);
	}

	va_end(args);
	return (coll);
}
