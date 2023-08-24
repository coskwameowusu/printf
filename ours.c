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

	if (format == NULL)
	{
		return (-1);
	}
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				int m = va_arg(args, int);

				_putchar(m);
				coll++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);

				while (*s)
				{
					_putchar(*s);
					s++;
					coll++;
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
				coll++;
			}
			format++;
		}
		else
		{
			_putchar(*format);
			format++;
			coll++;
		}
	}

	va_end(args);
	return (coll);
}
