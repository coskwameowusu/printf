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

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				int m = va_arg(args, int);

				putchar(m);
				coll++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);

				while (*s)
				{
					putchar(*s++);
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
			putchar(*format++);
			coll++;
		}
	}

	va_end(args);
	return (coll);
}
