/**
 * _printf - a function that produces output according to a format.
 * @format: The format string.
 * Return: Number of characters printed.
 */
#include "main.h"
int _printf(const char *format, ...)
{
	int coll = 0;
	va_list Cyn;

	va_start(Cyn, format);

	if (format != NULL)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			break;
			if (*format == 'c')
			{
				int m = va_arg(Cyn, int);

				putchar(m);
				coll++;
			}
			else if (*format == 's' && *format != '\0')
			{
				char *s = va_arg(Cyn, char *);

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
	va_end(Cyn);
	return (coll);
}
